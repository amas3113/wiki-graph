#include "../include/vertex.h"

Vertex::Vertex() {
    name = "";
    id = -1;
    visited = false;
}

Vertex::Vertex(std::string n, int gid) {
    name = n;
    id = gid;
    visited = false;
}

bool Vertex::operator==(const Vertex& v) const {
    if (id == v.id) {
        return true;
    }
    return false;
}
