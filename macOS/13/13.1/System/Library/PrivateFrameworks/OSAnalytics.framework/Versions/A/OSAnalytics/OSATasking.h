@interface OSATasking : NSObject

+ (id)proxyTasking:(id)a0 taskId:(id)a1 usingConfig:(id)a2 fromBlob:(id)a3;
+ (id)applyTasking:(id)a0 taskId:(id)a1 fromBlob:(id)a2;
+ (id)getInstalledTaskIds;
+ (id)getAvailableTaskingRoutings;
+ (BOOL)shouldApplyPreference:(id)a0;
+ (id)getDefaultTasking;
+ (id)normalizeInstructions:(id)a0;
+ (BOOL)preference:(id)a0 alreadySetInInstructions:(id)a1;
+ (id)selectConfigFromBlob:(id)a0 withError:(id *)a1;
+ (void)setCRKeyToRandomValue;

@end
