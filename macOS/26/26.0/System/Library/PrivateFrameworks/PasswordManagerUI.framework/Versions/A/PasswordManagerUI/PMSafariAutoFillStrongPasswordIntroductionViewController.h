@interface PMSafariAutoFillStrongPasswordIntroductionViewController : NSViewController <PMSafariAutoFillStrongPasswordIntroductionView> {
    void /* unknown type, empty encoding */ configurationProvider;
    void /* unknown type, empty encoding */ passwordProvider;
    void /* unknown type, empty encoding */ viewStyle;
}

@property (class, nonatomic, readonly) BOOL shouldShowView;
@property (class, nonatomic, readonly) BOOL shouldShowLoginIntroduction;
@property (class, nonatomic, readonly) BOOL shouldShowStrongPasswordIntroduction;
@property (class, nonatomic, readonly) BOOL shouldShowStrongPasswordSavedView;
@property (class, nonatomic, readonly) BOOL shouldShowICloudKeychainSyncingView;
@property (class, nonatomic, readonly) BOOL hasThirdPartyPasswordManagerEnabledAndPasswordsAppDisabledForAutoFill;

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) long long mode;
@property (nonatomic, weak) void /* function */ delegate;

+ (BOOL)shouldShowViewsInMode:(long long)a0;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithMode:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;

@end
