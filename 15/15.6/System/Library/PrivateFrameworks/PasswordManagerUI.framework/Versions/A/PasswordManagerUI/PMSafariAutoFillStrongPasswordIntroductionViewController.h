@interface PMSafariAutoFillStrongPasswordIntroductionViewController : NSViewController <PMSafariAutoFillStrongPasswordIntroductionView> {
    void /* unknown type, empty encoding */ imageProvider;
    void /* unknown type, empty encoding */ configurationProvider;
    void /* unknown type, empty encoding */ passwordProvider;
    void /* unknown type, empty encoding */ viewStyle;
}

@property (class, nonatomic, readonly) char shouldShowView;
@property (class, nonatomic, readonly) char shouldShowLoginIntroduction;
@property (class, nonatomic, readonly) char shouldShowStrongPasswordIntroduction;
@property (class, nonatomic, readonly) char shouldShowICloudKeychainSyncingView;
@property (class, nonatomic, readonly) char hasThirdPartyPasswordManagerEnabledAndPasswordsAppDisabledForAutoFill;

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) void /* unknown type, empty encoding */ mode;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

+ (char)shouldShowViewsInMode:(long long)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;

@end
