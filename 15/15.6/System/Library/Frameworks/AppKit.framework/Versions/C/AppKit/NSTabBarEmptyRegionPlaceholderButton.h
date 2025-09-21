@class NSString;
@protocol NSTabBarSyncedButtonDelegate;

@interface NSTabBarEmptyRegionPlaceholderButton : NSTabButton <NSTabBarSyncedButton>

@property (weak, nonatomic) id<NSTabBarSyncedButtonDelegate> buttonInTabSyncGroupDelegate;
@property (nonatomic, getter=isSyncedWithOtherButton) char syncedWithOtherButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setHasMouseOverHighlight:(char)a0 animated:(char)a1 notifyNSTabBarSyncedButtonDelegate:(char)a2;
- (void)_setHasPressedHighlight:(char)a0 notifyNSTabBarSyncedButtonDelegate:(char)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tabBarViewItem:(id)a1;
- (void)setHasMouseOverHighlight:(char)a0 animated:(char)a1;
- (void)setHasPressedHighlight:(char)a0;
- (void)setHighlightStateToPressed:(char)a0 hovered:(char)a1;

@end
