@interface TRISetupAssistantFetchUtils : NSObject

+ (char)removeNamespaceNamesWithRolloutForServerContext:(id)a0 namespaceNames:(id)a1;
+ (id)getIncompatibleNamespaceNamesForTriClientRollout:(id)a0 namespaceDescriptorProvider:(id)a1;
+ (id)getNamespaceNamesWithFetchDuringSetupAssistantEnabledWithTRIPaths:(id)a0;
+ (id)getValueInKeyValueStore:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)registerFinalizeBlockForDownloadLatencyTelemetryWithServerContext:(id)a0;
+ (char)setValueInKeyValueStore:(id)a0 key:(id)a1 value:(id)a2 error:(id *)a3;
+ (char)stopSetupAssistantFetchWithServerContext:(id)a0 namespaceNames:(id)a1 error:(id *)a2;

@end
