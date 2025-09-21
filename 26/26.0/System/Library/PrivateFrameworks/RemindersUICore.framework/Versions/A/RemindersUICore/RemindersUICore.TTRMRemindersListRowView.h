@interface RemindersUICore.TTRMRemindersListRowView : NSTableRowView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ forceBottomSeparatorHidden;
    void /* unknown type, empty encoding */ swipeActionDismissalObserver;
    void /* unknown type, empty encoding */ editModeState_cached;
    void /* unknown type, empty encoding */ nextRowEditModeState_cached;
    void /* unknown type, empty encoding */ isInContentsFacetForSelectedBackground;
    void /* unknown type, empty encoding */ bottomSeparator;
    void /* unknown type, empty encoding */ separatorLeading;
}

@property (nonatomic, readonly) long long interiorBackgroundStyle;
@property (nonatomic) BOOL nextRowSelected;
@property (nonatomic) BOOL selected;

- (void)willRemoveSubview:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)isSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundRect;
- (id)_contentsFacetForSelectedBackground;
- (BOOL)isNextRowSelected;
- (id)primarySelectionColor;
- (id)secondarySelectedControlColor;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
