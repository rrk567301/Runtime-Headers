@class NSString;

@interface WebArchiveGenerationControllerNavigationDelegate : NSObject <WKNavigationDelegate> {
    void *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)init;
- (id)initWithWebArchiveGenerationController:(void *)a0;

@end
