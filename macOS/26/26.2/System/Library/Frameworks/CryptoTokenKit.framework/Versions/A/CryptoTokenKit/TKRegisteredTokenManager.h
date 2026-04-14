@class NSString;

@interface TKRegisteredTokenManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lastUsedRegisteredTokenID;
    BOOL _wasPINCredentialInitiallySet;
    BOOL _wasPINCredentialProvidedByPINUI;
}

+ (id)sharedInstance;

- (BOOL)wasPINCredentialInitiallySet;
- (void)setWasPINCredentialProvidedByPINUI:(BOOL)a0;
- (BOOL)wasPINCredentialProvidedByPINUI;
- (void).cxx_destruct;
- (void)setWasPINCredentialInitiallySet:(BOOL)a0;
- (id)init;
- (id)lastUsedRegisteredTokenID;
- (void)setLastUsedRegisteredTokenID:(id)a0;

@end
