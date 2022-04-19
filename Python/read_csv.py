import numpy as np
import pandas as pd

header_list = ["col1", "col2", "col3", "..."]

data = pd.read_csv("path_to_file.csv", usecols=[
                   "col2", "col3"], names=header_list).to_numpy()
