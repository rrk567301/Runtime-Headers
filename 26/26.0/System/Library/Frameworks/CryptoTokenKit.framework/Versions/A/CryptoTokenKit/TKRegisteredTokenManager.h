@class NSString;

@interface TKRegisteredTokenManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lastUsedRegisteredTokenID;
    BOOL _wasPINCredentialInitiallySet;
    BOOL _wasPINCredentialProvidedByPINUI;
}

+ (id)sharedInstance;

- (id)lastUsedRegisteredTokenID;
- (id)init;
- (BOOL)wasPINCredentialInitiallySet;
- (BOOL)wasPINCredentialProvidedByPINUI;
- (void)setLastUsedRegisteredTokenID:(id)a0;
- (void)setWasPINCredentialInitiallySet:(BOOL)a0;
- (void)setWasPINCredentialProvidedByPINUI:(BOOL)a0;
- (void).cxx_destruct;

@end
