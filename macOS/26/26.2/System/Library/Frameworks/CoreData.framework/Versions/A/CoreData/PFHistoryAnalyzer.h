@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {
    PFHistoryAnalyzerOptions *_options;
}

- (BOOL)processTransaction:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)initWithOptions:(id)a0;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)a0;
- (id)init;
- (void)dealloc;

@end
