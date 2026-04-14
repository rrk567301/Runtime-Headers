@class NSUserDefaults;

@interface NFCALogger : NSObject {
    NSUserDefaults *_userDefault;
}

+ (id)sharedCALogger;

- (id)init;
- (void).cxx_destruct;
- (BOOL)restrictedMode;
- (unsigned long long)getTimestamp;
- (id)_getUD;
- (id)generateDailyUUIDForCA;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (void)setRestrictedMode:(BOOL)a0;
- (void)removeRestrictedMode;
- (unsigned int)getDurationFrom:(unsigned long long)a0;
- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;

@end
