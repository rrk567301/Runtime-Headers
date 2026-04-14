@interface TranslationAPISupport.LanguageSupportHostModel : NSObject <TranslationAPISupport.LanguageSupportXPCHostProtocol, TranslationAPISupport.XPCConnectionHandling> {
    void /* unknown type, empty encoding */ _preflightConfiguration;
    void /* unknown type, empty encoding */ _completion;
    void /* unknown type, empty encoding */ _extensionConfiguration;
    void /* unknown type, empty encoding */ _isConnectedToRemote;
    void /* unknown type, empty encoding */ _xpcConnection;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void).cxx_destruct;
- (id)init;
- (void)didFinishWithFinalConfiguration:(id)a0 error:(id)a1;
- (BOOL)shouldAcceptWithConnection:(id)a0;

@end
