# Final Project : basak4-ctoledo2-ajm22-jcrowe6
The final project parses graph datasets (with support for vertex naming and categorization) to be used with either a breadth first search or Kosaraju's algorithm. 
The edge data format is represented as a line of two integers (where each integer represents a vertex) seperated by a space, e.g.
```
0 1
0 25
1 5
...
```

The vertex name data format is represented as a line consisting of an integer (vertex number) and a string (vertex name)
```
0 Apple
1 New Zealand
2 Rain
...
```

The category data format is represented as a line consisting of keyword 'Category:'  


Our code can be compiled my simply running ```make```. The data we used were three files named ```wiki_pages.txt```, ```wiki_data.txt``` and ```wiki_categories``` to be placed in the ```data``` directory. These can be acquired by running
```
#wget -O data/wiki_pages.txt.gz http://snap.stanford.edu/data/wiki-topcats-page-names.txt.gz
#wget -O data/wiki_data.txt.gz http://snap.stanford.edu/data/wiki-topcats.txt.gz

wget -O data/wiki_verts.txt.gz http://snap.stanford.edu/data/wiki-topcats-page-names.txt.gz
wget -O data/wiki_edges.txt.gz http://snap.stanford.edu/data/wiki-topcats.txt.gz
wget -O data/wiki_cats.txt.gz http://snap.stanford.edu/data/wiki-topcats-categories.txt.gz
gunzip data/wiki*
```

Running ```./wiki_algs``` begins the program, where the user is prompted to provide 3 directories for the vertice, edge, and category file respectively. Worth noting is the fact that the category file can be an empty .txt and all but "printCategories" will still function. Once all files are loaded, the user may type "help" for help, and from there on is guided through the rest of the program. This showcases our implementations of BFS, a Landmark path finding algorithm, kosaraju's algorithm, and a cycle detection algorithm.

Final Presentation: https://drive.google.com/drive/folders/1sSPnWzA7zl0-VDAtQEesaEc2jwd_Kn3W?usp=sharing

Data Source: http://snap.stanford.edu/data/wiki-topcats.html
