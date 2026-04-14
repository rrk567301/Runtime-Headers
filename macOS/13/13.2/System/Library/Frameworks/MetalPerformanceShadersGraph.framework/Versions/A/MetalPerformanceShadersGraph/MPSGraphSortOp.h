@interface MPSGraphSortOp : MPSGraphOperation {
    BOOL _descending;
}

- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 descending:(BOOL)a3 name:(id)a4;

@end
