@interface VideosUI.ChevronIndicatorStackViewController : VideosUI.StackViewController {
    void /* unknown type, empty encoding */ leadingIndicator;
    void /* unknown type, empty encoding */ trailingIndicator;
    void /* unknown type, empty encoding */ isEpicInline;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;
- (id)chevronIndicatorOf:(long long)a0 kind:(id)a1;
- (void)scrollPageFrom:(id)a0 for:(long long)a1;
- (void)vui_viewDidLayoutSubviews;

@end
