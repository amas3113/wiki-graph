#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <vector>
#include <list>

class Vertex {
    public:
        int id;                         // article id #
        std::string name;               // article name 
        
        std::list<int> categories;      // stores all categories article is part of
        std::list<int> neighbors;       // stores all adjacent vertices of that vertex
        std::list<int> in_neighbors;    // stores all verticies that point INTO this node
        bool visited;

        Vertex();
        Vertex(std::string n, int gid);
        bool operator==(const Vertex& v) const;
};
