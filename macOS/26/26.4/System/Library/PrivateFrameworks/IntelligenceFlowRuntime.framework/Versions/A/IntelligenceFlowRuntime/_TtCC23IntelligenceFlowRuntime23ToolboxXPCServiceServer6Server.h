@interface _TtCC23IntelligenceFlowRuntime23ToolboxXPCServiceServer6Server : NSObject <LXToolboxXPCProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)baseRelativeURLWithPlannerType:(id)a0 with:(id /* block */)a1;
- (void)countWithPlannerType:(id)a0 toolType:(id)a1 with:(id /* block */)a2;
- (void)isDatabaseReadyWithPlannerType:(id)a0 with:(id /* block */)a1;
- (void)listToolsWithPlannerType:(id)a0 toolType:(id)a1 registryType:(id)a2 with:(id /* block */)a3;
- (void)metadataWithPlannerType:(id)a0 enableAllowList:(BOOL)a1 with:(id /* block */)a2;
- (void)populateWithPlannerType:(id)a0 with:(id /* block */)a1;
- (void)queryWithPlannerType:(id)a0 query:(id)a1 k:(long long)a2 bundleIDs:(id)a3 with:(id /* block */)a4;
- (void)readinessWithPlannerType:(id)a0 with:(id /* block */)a1;
- (void)sandboxWithInjectionId:(id)a0 plannerType:(id)a1 with:(id /* block */)a2;
- (void)toolMappingWithPlannerType:(id)a0 customKey:(id)a1 with:(id /* block */)a2;

@end
