@interface SnippetUIUtilities : NSObject

+ (void)createViewControllersForButtons:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
+ (void)emitInstrumentationEvent:(id)a0 delegate:(id)a1;
+ (void)performSFCommand:(id)a0 rowModel:(id)a1 delegate:(id)a2;
+ (void)reportFeedback:(id)a0 queryId:(unsigned long long)a1 delegate:(id)a2;
+ (BOOL)supportsConfigurationForCardSection:(id)a0;
+ (id)supportsConfigurationForCombinedRowModel:(id)a0;

@end
