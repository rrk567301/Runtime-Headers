@interface NDOManager : NSObject

+ (void)postCAEventFor:(id)a0 eventDict:(id)a1;

- (id)serialNumber;
- (id)agentConnection;
- (BOOL)isHighServerVersionFeaturesetEnabled;
- (void)scheduleOutreachAfter:(double)a0 withReply:(id /* block */)a1;
- (void)appleAccountAddedWithReply:(id /* block */)a0;
- (void)getWarrantyUsingPolicy:(unsigned long long)a0 withReply:(id /* block */)a1;
- (BOOL)checkIsAvailableInStore:(id)a0;
- (void)appSupportDictionaryWithCompletion:(id /* block */)a0;
- (void)isHighServerVersionFeaturesetEnabledWithStatusHandler:(id /* block */)a0;
- (void)webURLOverride:(id /* block */)a0;
- (void)apsSupportedOverride:(id /* block */)a0;
- (BOOL)isAPSSupportedOverrideWithServerValue:(BOOL)a0;
- (void)serialNumberOverride:(id /* block */)a0;

@end
