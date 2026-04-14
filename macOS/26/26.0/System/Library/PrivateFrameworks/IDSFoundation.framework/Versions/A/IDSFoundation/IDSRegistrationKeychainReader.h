@class NSMutableArray, IMDispatchTimer;

@interface IDSRegistrationKeychainReader : NSObject {
    NSMutableArray *_registrationData;
    IMDispatchTimer *_purgeTimer;
    id /* block */ _purgeCancelBlock;
    id /* block */ _purgeEnqueueBlock;
}

+ (id)sharedInstance;
+ (id)keychainAccessGroupForVersion:(unsigned long long)a0;
+ (id)keychainServiceForVersion:(unsigned long long)a0;
+ (id)keychainAccountForVersion:(unsigned long long)a0;

- (void)_reloadFromDictionaryLocked:(id)a0;
- (void)dealloc;
- (void)_setPurgeTimer;
- (id)init;
- (void)_reloadFromKeychainLocked;
- (id)registrationWithServiceType:(id)a0 accountType:(int)a1 isTemporary:(BOOL)a2 value:(id)a3;
- (void)flushCache;
- (id)registrationData;
- (void).cxx_destruct;
- (void)_flush;

@end
