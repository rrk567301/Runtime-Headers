@interface MADVideoAnalysisPipelineNode : MADProcessingNode <MADProcessingNodeProtocol> {
    id /* block */ _pipelineBlock;
    unsigned long long _flags;
}

+ (id)flagsKey;

- (void).cxx_destruct;
- (id)collectResultsWithError:(id *)a0;
- (id)combineResults:(id)a0 withOtherResults:(id)a1;
- (id)initWithQueue:(id)a0 pipelineBlock:(id /* block */)a1;
- (BOOL)processInput:(id)a0 outputs:(id *)a1 error:(id *)a2;

@end
