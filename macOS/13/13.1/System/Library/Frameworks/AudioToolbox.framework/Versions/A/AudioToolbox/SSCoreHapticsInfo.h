@interface SSCoreHapticsInfo : NSObject

+ (id)instance;

- (unsigned long long)generateNewSSIDForPlayer:(id)a0;
- (id)getPlayerForSSID:(unsigned long long)a0;
- (void)disposeSSID:(unsigned long long)a0;

@end
