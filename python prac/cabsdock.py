import requests
import json

url = 'http://biocomp.chem.uw.edu.pl/CABSdock/REST/add_job/'
files = {'file': open('3dpo_mod-pep.pdb')} #or use PDB code in var data
data = {
    "receptor_pdb_code": "  ", #or use PDB file in var files
    "ligand_seq": "DKPPYLPRPRPPRRGYNR",
    "email": "dheemanth.regati@niser.ac.in",
    "show": True,
    "project_name":"my_project1",
    "excluded_regions":[
        {
            "start": "  ",
            "end": "  ",
            "chain": "  "
        }
    ],
    "flexible_regions":[
        {
            "start": " ",
            "end": " ",
            "chain": " ",
            "flexibility": "  "
        },
        {
            "start": "  ",
            "end": "  ",
            "chain": " ",
            "flexibility": "  "
        },
    ]
}

response = requests.post(url, files=files, data=data) #request with file
#response = requests.post(url, data=data) # request without file
print(response.text)
 