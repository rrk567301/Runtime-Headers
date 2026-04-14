@class NSString;

@interface GameStoreKit.QuickActionButtonView : NSView <CNContactQuickActionPresentation> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ action;
    void /* function */ title;
    void /* function */ systemImageName;
    void /* unknown type, empty encoding */ rootView;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *systemImageName;
@property (nonatomic) BOOL enabled;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)longPressedWithSender:(id)a0;
- (void)rightClickedWithSender:(id)a0;
- (void)tappedWithSender:(id)a0;

@end
