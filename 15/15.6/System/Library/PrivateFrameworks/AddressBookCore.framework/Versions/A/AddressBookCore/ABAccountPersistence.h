@class NSString, NSMutableDictionary;
@protocol ABAccountPersistenceDelegate, ABAccountPersistenceBackend, CNCancelable;

@interface ABAccountPersistence : NSObject {
    id<ABAccountPersistenceBackend> _backend;
    NSString *_accountType;
    id<CNCancelable> _delayedApplyToken;
    NSMutableDictionary *_persistentValues;
}

@property (getter=isInvalidated) char invalidated;
@property char hasChanges;
@property (weak) id<ABAccountPersistenceDelegate> delegate;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (char)boolForKey:(id)a0;
- (void)invalidate;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setBool:(char)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)_sourceShouldRefreshImmediately;
- (id)acAccountIdentifier;
- (id)allPersistentValues;
- (void)applyChanges:(id)a0;
- (void)applyChangesAndRefresh:(char)a0;
- (void)delayedApplyChanges;
- (void)deletePersistentValuesWithAddressBook:(id)a0;
- (id)initWithBackend:(id)a0 accountType:(id)a1;
- (char)loadPersistentValues;
- (void)nts_removeObjectForKey:(id)a0;
- (void)nts_setObject:(id)a0 forKey:(id)a1;
- (void)persistValuesAndPostDidChangeNotifcation:(char)a0;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id /* block */)a0;
- (char)savePersistentValuesAndPostDidChangeNotification:(char)a0;
- (id)scheduleDelayedApply;
- (void)setDelayedApplyToken:(id)a0;
- (void)setUnsignedInteger:(unsigned long long)a0 forKey:(id)a1;
- (unsigned long long)unsignedIntegerForKey:(id)a0;

@end
