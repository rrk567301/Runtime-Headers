@class NSString;

@interface TKRegisteredTokenManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lastUsedRegisteredTokenID;
    BOOL _wasPINCredentialInitiallySet;
    BOOL _wasPINCredentialProvidedByPINUI;
}

+ (id)sharedInstance;

- (id)init;
- (void)setWasPINCredentialProvidedByPINUI:(BOOL)a0;
- (void)setLastUsedRegisteredTokenID:(id)a0;
- (void)setWasPINCredentialInitiallySet:(BOOL)a0;
- (id)lastUsedRegisteredTokenID;
- (void).cxx_destruct;
- (BOOL)wasPINCredentialInitiallySet;
- (BOOL)wasPINCredentialProvidedByPINUI;

@end
