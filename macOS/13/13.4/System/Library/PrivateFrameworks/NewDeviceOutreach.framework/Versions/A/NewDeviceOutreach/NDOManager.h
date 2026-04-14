@interface NDOManager : NSObject

+ (void)postCAEventFor:(id)a0 eventDict:(id)a1;

- (id)serialNumber;
- (id)agentConnection;
- (void)webURLOverride:(id /* block */)a0;
- (void)appSupportDictionaryWithCompletion:(id /* block */)a0;
- (void)appleAccountAddedWithReply:(id /* block */)a0;
- (void)apsSupportedOverride:(id /* block */)a0;
- (BOOL)checkIsAvailableInStore:(id)a0;
- (id)getDecodedParamsForPath:(id)a0;
- (void)getWarrantyUsingPolicy:(unsigned long long)a0 params:(id)a1 withReply:(id /* block */)a2;
- (BOOL)isAPSSupportedOverrideWithServerValue:(BOOL)a0;
- (BOOL)isHighServerVersionFeaturesetEnabled;
- (void)isHighServerVersionFeaturesetEnabledWithStatusHandler:(id /* block */)a0;
- (void)scheduleOutreachAfter:(double)a0 withReply:(id /* block */)a1;
- (void)serialNumberOverride:(id /* block */)a0;

@end
