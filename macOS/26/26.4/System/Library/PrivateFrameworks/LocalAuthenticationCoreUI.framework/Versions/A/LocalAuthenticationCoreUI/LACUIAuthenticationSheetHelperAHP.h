@class NSString, NSDictionary, LACUIAuthenticationSheetHelperAHPClient, LACUIAuthenticationSheetHelperAvailability;
@protocol LACUIAuthenticationSheetState, LACContextProviding;

@interface LACUIAuthenticationSheetHelperAHP : NSObject <LACAHPDelegate> {
    id<LACUIAuthenticationSheetState> _state;
    LACUIAuthenticationSheetHelperAvailability *_availability;
    LACUIAuthenticationSheetHelperAHPClient *_ahpClient;
    BOOL _isRunningTests;
    NSDictionary *_watchAHPOptions;
    NSString *_watchUserName;
}

@property (readonly, nonatomic) LACUIAuthenticationSheetHelperAvailability *availabilityHelper;
@property (weak, nonatomic) id<LACContextProviding> contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsRunningTests:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isRunningTests;
- (void)event:(long long)a0 eventHints:(id)a1 reply:(id /* block */)a2;
- (id)initWithState:(id)a0 availabilityHelper:(id)a1 contextProvider:(id)a2;
- (void)setUpAlternativeAuthenticationMethods:(id /* block */)a0;
- (void)_activateSmartCardAHPProvider:(id)a0 completion:(id /* block */)a1;
- (void)_activateWatchAHPProvider:(id)a0 userName:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_executeActivationTasks:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)_setupSmartCardsAHPIfNeededWithCompletion:(id /* block */)a0;
- (void)_setupTouchIDIfNeededWithCompletion:(id /* block */)a0;
- (void)_setupWatchAHPIfNeededWithCompletion:(id /* block */)a0;
- (void)activateAuthenticationMethod:(id)a0 completion:(id /* block */)a1;
- (void)deactivateAuthenticationMethod:(id)a0 completion:(id /* block */)a1;
- (void)setAHPClient:(id)a0;
- (void)setUpAlternativeAuthenticationMethodsWithTimeout:(double)a0 completion:(id /* block */)a1;

@end
