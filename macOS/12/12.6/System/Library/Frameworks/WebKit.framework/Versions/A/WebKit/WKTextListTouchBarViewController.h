@interface WKTextListTouchBarViewController : NSViewController {
    void *_webViewImpl;
}

@property (nonatomic) int currentListType;

- (void)_selectList:(id)a0;
- (id)initWithWebViewImpl:(void *)a0;
- (void)didDestroyView;

@end
