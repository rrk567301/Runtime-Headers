@class NSMutableDictionary;

@interface AOSAccountCache : NSObject {
    NSMutableDictionary *_dsidMappings;
    NSMutableDictionary *_accountDicts;
    NSMutableDictionary *_appleAccountLookups;
}

+ (id)sharedInstance;
+ (void)initialize;

- (void)clearCaches;
- (void)dealloc;
- (id)init;
- (void)_changeNotificationReceived:(id)a0;
- (id)_dsidForAppleID:(id)a0;
- (id)_maskedSensitiveString:(id)a0;
- (void)_setDSID:(id)a0 forAppleID:(id)a1;
- (void)cacheAppleAccountInfo:(id)a0 forAccount:(struct AOSAccount { } *)a1;
- (id)cachedAppleAccountInfoForAccount:(struct AOSAccount { } *)a0;
- (void)clearCachedAppleAccountInfo;
- (id)infoForAccount:(struct AOSAccount { } *)a0 withMaxAge:(double)a1;
- (void)setInfo:(id)a0 forAccount:(struct AOSAccount { } *)a1;

@end
