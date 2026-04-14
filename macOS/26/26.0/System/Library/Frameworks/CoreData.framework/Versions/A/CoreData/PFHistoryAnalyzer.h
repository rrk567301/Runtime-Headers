@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {
    PFHistoryAnalyzerOptions *_options;
}

- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (id)init;
- (BOOL)processTransaction:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)a0;

@end
