@interface ATXDocumentPredictionClient : NSObject

+ (void)categoriesForRequest:(id)a0 withReply:(id /* block */)a1;
+ (id)_demoDocumentsPath;
+ (id)_getDocumentsForDemoMode;
+ (BOOL)_isDemoModeEnabled;

- (id)zkwPredictionsForRequest:(id)a0 error:(id *)a1;
- (id)zkwPredictionsForRequest:(id)a0 usingPredictionManager:(id)a1;

@end
