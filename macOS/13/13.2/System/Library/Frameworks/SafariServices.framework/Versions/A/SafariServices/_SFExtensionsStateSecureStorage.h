@class NSString;

@interface _SFExtensionsStateSecureStorage : NSObject {
    long long _extensionsLocation;
    NSString *_keychainService;
}

@property (nonatomic) long long keychainAccount;

- (void).cxx_destruct;
- (id)initWithKeychainService:(id)a0 extensionsLocation:(long long)a1;
- (id)initWithKeychainService:(id)a0;
- (id)_keychainAccount;
- (id)_keychainAccountForActiveBrowser;
- (id)_keychainAccountForProductionSafari;
- (id)_keychainAccountForSafariTechnologyPreview;
- (int)getExtensionsPlistKeychainItemUsingLegacyKeychain:(BOOL)a0 outData:(id *)a1;

@end
