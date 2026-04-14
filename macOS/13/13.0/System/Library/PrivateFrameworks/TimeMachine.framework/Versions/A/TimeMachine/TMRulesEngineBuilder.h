@class TMRulesEngineBOM;

@interface TMRulesEngineBuilder : NSObject {
    id /* block */ _cancelBlock;
    TMRulesEngineBOM *_bom;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBOM:(id)a0 cancelBlock:(id /* block */)a1;
- (id)buildRulesEngine;
- (id)_generateConstructionContext;
- (void)_processStickyExclusionsUsingContext:(id)a0;
- (void)_processPathExclusionsUsingContext:(id)a0;
- (void)_processUserHomesUsingContext:(id)a0;
- (void)_processSystemFilesUsingContext:(id)a0;
- (void)_processMailRealmsUsingContext:(id)a0;
- (id)_assembleDeviceEnginesUsingContext:(id)a0;

@end
