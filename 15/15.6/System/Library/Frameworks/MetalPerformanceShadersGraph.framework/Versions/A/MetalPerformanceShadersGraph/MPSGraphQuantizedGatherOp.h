@interface MPSGraphQuantizedGatherOp : MPSGraphOperation {
    char _hasZeroPoint;
    char _hasMin;
    long long _axis;
    unsigned long long _batchDims;
    char _allowNegativeIndices;
    unsigned int _dequantDataType;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 hasZeroPoint:(char)a3 hasMin:(char)a4 dequantDataType:(unsigned int)a5 axis:(long long)a6 batchDimensions:(unsigned long long)a7 name:(id)a8;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(char)a3 name:(id)a4;

@end
