@interface TPKTipContentHintView : TPKContentView {
    void /* unknown type, empty encoding */ bottomSeparatorView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)bottomSeperatorNeedsUpdate;
- (id)initWithContentController:(id)a0 tipContent:(id)a1;
- (id)initWithController:(id)a0 content:(id)a1;
- (id)initWithReusableTipView:(id)a0;
- (void)resetHostingView;
- (void)updateContentBackgroundColor:(id)a0;

@end
