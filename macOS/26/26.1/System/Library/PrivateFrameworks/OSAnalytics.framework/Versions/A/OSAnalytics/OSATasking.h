@interface OSATasking : NSObject

+ (id)randomizedCRKey;
+ (id)selectConfigFromBlob:(id)a0 withError:(id *)a1;
+ (id)applyTasking:(id)a0 taskId:(id)a1 fromBlob:(id)a2;
+ (id)defaultTasking;
+ (id)getAvailableTaskingRoutings;
+ (id)getInstalledTaskIds;
+ (id)normalizeInstructions:(id)a0 forSamplingKey:(const char *)a1;
+ (BOOL)preference:(id)a0 alreadySetInInstructions:(id)a1;
+ (id)proxyTasking:(id)a0 taskId:(id)a1 usingConfig:(id)a2 fromBlob:(id)a3;
+ (const char *)samplingKey;
+ (BOOL)shouldApplyPreference:(id)a0 forSamplingKey:(const char *)a1;

@end
