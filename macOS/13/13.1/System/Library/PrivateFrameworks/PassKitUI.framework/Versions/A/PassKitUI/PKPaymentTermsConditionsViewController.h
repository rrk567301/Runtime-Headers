@class NSTextField, NSBox, NSString, NSProgressIndicator, WKWebView, NSButton, NSURL;
@protocol PKPaymentTermsAndConditionsDelegate;

@interface PKPaymentTermsConditionsViewController : NSViewController <WKNavigationDelegate>

@property (retain) NSProgressIndicator *spinner;
@property (retain) NSButton *acceptButton;
@property (retain) NSBox *box;
@property (retain) WKWebView *webView;
@property (retain) NSTextField *failedMessage;
@property (retain, nonatomic) NSURL *termsAndConditionsURL;
@property (weak, nonatomic) id<PKPaymentTermsAndConditionsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (id)nibBundle;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)acceptAction:(id)a0;
- (void)declineAction:(id)a0;

@end
