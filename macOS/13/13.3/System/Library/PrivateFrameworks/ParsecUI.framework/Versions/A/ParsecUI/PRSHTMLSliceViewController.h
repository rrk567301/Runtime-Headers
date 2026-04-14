@class WebView, NSString, PRSEncyclopediaPreviewController;

@interface PRSHTMLSliceViewController : PRSCardSectionSliceViewController <WebFrameLoadDelegate>

@property double webViewHeight;
@property (retain) WebView *view;
@property (retain) PRSEncyclopediaPreviewController *encyclopediaController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (double)height;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (id)initWithHTMLCardSection:(id)a0 encyclopediaController:(id)a1;

@end
