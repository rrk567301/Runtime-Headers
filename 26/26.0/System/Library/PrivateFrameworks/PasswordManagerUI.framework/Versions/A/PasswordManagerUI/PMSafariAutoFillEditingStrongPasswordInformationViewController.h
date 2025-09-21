@class NSString, NSURL;

@interface PMSafariAutoFillEditingStrongPasswordInformationViewController : NSViewController <PMSafariAutoFillStrongPasswordIntroductionView> {
    void /* unknown type, empty encoding */ _anywebsiteTitle;
    void /* unknown type, empty encoding */ _anyFormURL;
    void /* unknown type, empty encoding */ configurationProvider;
}

@property (class, nonatomic, readonly) BOOL shouldShowView;

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic, copy) NSString *websiteTitle;
@property (nonatomic, copy) NSURL *formURL;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (id)initWithWebsiteTitle:(id)a0 url:(id)a1;

@end
