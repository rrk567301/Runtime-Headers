@class NSLock;

@interface AALoginContextTransientStorage : NSObject {
    BOOL _hasBeenCleared;
    NSLock *_clearLock;
}

+ (id)sharedStorage;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)save:(id)a0;
- (id)storedContext;
- (void)_saveNonsensitiveParameters:(id)a0;
- (id)_readNonsensitiveParameters;
- (void)_saveKeychainItem:(id)a0 forUsername:(id)a1 service:(id)a2;
- (id)_keychainItemForUsername:(id)a0 service:(id)a1;
- (void)_deleteKeychainItemForUsername:(id)a0 service:(id)a1;

@end
