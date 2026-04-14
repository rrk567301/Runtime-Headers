@interface ATXAppPredictionDataHarvester : NSObject

+ (id)_generateLoggingDictionaryFromPredictionItem:(id)a0 itemIndex:(unsigned long long)a1 sessionUUID:(id)a2 numItemsInSession:(unsigned long long)a3;
+ (void)harvestDataFromActionPredictionItem:(id)a0 isMenuItem:(BOOL)a1 itemIndex:(unsigned long long)a2 itemOutcome:(unsigned long long)a3 sessionOutcome:(unsigned long long)a4 sessionUUID:(id)a5 numItemsInSession:(unsigned long long)a6;
+ (void)harvestDataFromDocumentPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[828]; float x3; BOOL x4; BOOL x5; } *)a0 itemIndex:(unsigned long long)a1 itemOutcome:(unsigned long long)a2 sessionOutcome:(unsigned long long)a3 sessionUUID:(id)a4 numItemsInSession:(unsigned long long)a5;
+ (void)harvestDataFromPredictionItem:(id)a0 itemIndex:(unsigned long long)a1 itemOutcome:(unsigned long long)a2 sessionOutcome:(unsigned long long)a3 sessionUUID:(id)a4 numItemsInSession:(unsigned long long)a5;

@end
