@interface VCPHomeKitAnalysisService : NSObject

+ (id)analysisService;

- (void)cancelAllRequests;
- (void)cancelRequest:(int)a0;
- (id)init;
- (int)requestAnalysis:(unsigned long long)a0 ofAssetData:(id)a1 withProperties:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestAnalysis:(unsigned long long)a0 ofAssetSurface:(id)a1 withProperties:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestResidentMaintenanceWithOptions:(id)a0 andCompletionHandler:(id /* block */)a1;

@end
