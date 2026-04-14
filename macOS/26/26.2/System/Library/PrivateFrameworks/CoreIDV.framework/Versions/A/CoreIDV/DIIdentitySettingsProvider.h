@class NSString, NSNumber, NSError;

@interface DIIdentitySettingsProvider : NSObject {
    void /* unknown type, empty encoding */ extensionPointManager;
    void /* unknown type, empty encoding */ firstPartyDocumentProviderPreferencesManager;
    void /* unknown type, empty encoding */ walletSettingsAnalyticsReporter;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)isDocumentProviderExtensionEnabledFor:(id)a0;
- (void)setDocumentProviderExtensionEnablementFor:(id)a0 to:(BOOL)a1;
- (void)showDocumentProviderExtensionFor:(NSString *)a0 completion:(void (^)(NSNumber *, NSError *))a1;

@end
