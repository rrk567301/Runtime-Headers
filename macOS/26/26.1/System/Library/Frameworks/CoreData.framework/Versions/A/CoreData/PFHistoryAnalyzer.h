@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {
    PFHistoryAnalyzerOptions *_options;
}

- (id)initWithOptions:(id)a0;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)a0;
- (void)dealloc;
- (BOOL)processTransaction:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)init;

@end
