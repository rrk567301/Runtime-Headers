@class NSString;

@interface TKRegisteredTokenManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lastUsedRegisteredTokenID;
    BOOL _wasPINCredentialInitiallySet;
    BOOL _wasPINCredentialProvidedByPINUI;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)setLastUsedRegisteredTokenID:(id)a0;
- (void)setWasPINCredentialProvidedByPINUI:(BOOL)a0;
- (BOOL)wasPINCredentialInitiallySet;
- (id)init;
- (BOOL)wasPINCredentialProvidedByPINUI;
- (void)setWasPINCredentialInitiallySet:(BOOL)a0;
- (id)lastUsedRegisteredTokenID;

@end
