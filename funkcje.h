#pragma once
#include "ogrsf_frmts.h"
#include <vector>

void read(const  char* name, const  char* layer, const char* field);

std::vector<double> readPointShapeFile(OGRPoint* poPoint);

std::vector<std::vector<double>> readMultiPointShapeFile(OGRGeometry* poGeometry, OGRFeature* poFeature);

std::vector<std::vector<double>> readLineShapeFile(OGRLineString* poLineString);

std::vector<std::vector<double>> readMultiLineShapeFile(OGRGeometry* poGeometry, OGRFeature* poFeature);

void write(const char* name, const char* layer, const char* field, std::vector<std::vector<double>> points, const char* type);

void writePointShapeFile(const char* field, OGRLayer* poLayer, std::vector<std::vector<double>> points);

void writeMultiPointShapeFile(const char* field, OGRLayer* poLayer, std::vector<std::vector<double>> points);