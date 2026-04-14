@class NSString;

@interface _SFExtensionsStateSecureStorage : NSObject {
    long long _extensionsLocation;
    NSString *_keychainService;
}

@property (nonatomic) long long keychainAccount;

- (void).cxx_destruct;
- (id)initWithKeychainService:(id)a0 extensionsLocation:(long long)a1;
- (int)getExtensionsPlistKeychainItemUsingLegacyKeychain:(BOOL)a0 outData:(id *)a1;
- (id)_keychainAccountForSafariTechnologyPreview;
- (id)_keychainAccountForProductionSafari;
- (id)_keychainAccountForActiveBrowser;
- (id)_keychainAccount;
- (id)initWithKeychainService:(id)a0;

@end
