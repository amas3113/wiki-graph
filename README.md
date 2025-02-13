# CS225 Final Project: wiki-graph
The final project parses graph datasets (with support for vertex naming and categorization) to be used with either a breadth first search (BFS) or Kosaraju's algorithm.

Edge data is represented as lines of two integers (where each integer represents a vertex) delimited by a space:
```
0 1
0 25
1 5
...
```

Vertex name data is represented as lines consisting of an integer (vertex number) and a string (vertex name):
```
0 Apple
1 New Zealand
2 Rain
...
```

Category data is represented as lines consisting of keyword ```Category:[Category Name];``` followed by all vertex IDs belonging to that category:
```
Category:Fruit; 0 55
Category:Countries; 1 4124
Category:Weather_types; 2 15
...
```

## Acquiring dataset
The wikipedia dataset can be acquired from https://snap.stanford.edu/data/wiki-topcats.html:
```
wget -O data/wiki_verts.txt.gz http://snap.stanford.edu/data/wiki-topcats-page-names.txt.gz
wget -O data/wiki_edges.txt.gz http://snap.stanford.edu/data/wiki-topcats.txt.gz
wget -O data/wiki_cats.txt.gz http://snap.stanford.edu/data/wiki-topcats-categories.txt.gz
gunzip data/wiki*
```

## Building
wiki-graph can be compiled using ```make```. By default, the executable is stored in a ./bin/ subdirectory.

## Running
Running ```./bin/wiki_graph``` begins the program, where the user is prompted to provide 3 file paths for the vertex, edge, and category file respectively. Worth noting is the fact that the category file can be an empty .txt and all but "printCategories" will still function. Once all files are loaded, the user may type "help" for information on commands. This showcases our implementations of BFS, a landmark path finding algorithm, Kosaraju's algorithm, and a cycle detection algorithm.

Final Presentation: https://drive.google.com/drive/folders/1sSPnWzA7zl0-VDAtQEesaEc2jwd_Kn3W?usp=sharing

Authors: basak4-ctoledo2-ajm22-jcrowe6
