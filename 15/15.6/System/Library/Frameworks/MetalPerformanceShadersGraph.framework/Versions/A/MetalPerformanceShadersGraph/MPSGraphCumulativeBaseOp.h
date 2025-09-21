@interface MPSGraphCumulativeBaseOp : MPSGraphOperation {
    char _exclusive;
    char _reverse;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 exclusive:(char)a3 reverse:(char)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(char)a3 name:(id)a4;

@end
