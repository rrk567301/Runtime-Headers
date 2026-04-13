@class LAUIAuthenticationSheetHelperAHPClient, LAUIAuthenticationSheetHelperAvailability;
@protocol LAUIAuthenticationSheetState;

@interface LAUIAuthenticationSheetHelperAHP : NSObject <AuthenticationHintsDelegate> {
    id<LAUIAuthenticationSheetState> _state;
    LAUIAuthenticationSheetHelperAHPClient *_ahpClient;
}

@property (retain, nonatomic) LAUIAuthenticationSheetHelperAvailability *availability;

- (void).cxx_destruct;
- (id)initWithState:(id)a0;
- (void)event:(long long)a0 eventHints:(id)a1 reply:(id /* block */)a2;
- (void)_setupTouchIDIfNeededWithCompletion:(id /* block */)a0;
- (void)_setupWatchAHPIfNeededWithCompletion:(id /* block */)a0;
- (void)_setupSmartCardsAHPIfNeededWithCompletion:(id /* block */)a0;
- (void)setUpAlternativeAuthenticationMethods:(id /* block */)a0;
- (void)setAHPClient:(id)a0;

@end
