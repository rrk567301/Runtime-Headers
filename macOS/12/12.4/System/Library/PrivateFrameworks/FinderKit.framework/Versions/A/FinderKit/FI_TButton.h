@class NSColor, FI_TTargetActionFunctor;

@interface FI_TButton : NSButton {
    struct TNSRef<NSColor, void> { NSColor *fRef; } _titleColor;
    struct TNSRef<NSColor, void> { NSColor *fRef; } _alternateTitleColor;
    BOOL _acceptsFirstMouse;
    struct TriStateBool { int fState; } _isEnabledCacheWhenNotKey;
    BOOL _isInsideWindowChangedKeyState;
    struct TNSRef<FI_TTargetActionFunctor, void> { FI_TTargetActionFunctor *fRef; } _glue;
    struct unique_ptr<FI_TBestFitStringSelector, std::default_delete<FI_TBestFitStringSelector>> { struct __compressed_pair<FI_TBestFitStringSelector *, std::default_delete<FI_TBestFitStringSelector>> { struct FI_TBestFitStringSelector *__value_; } __ptr_; } _bestFitTitleSelector;
    struct unique_ptr<FI_TBestFitStringSelector, std::default_delete<FI_TBestFitStringSelector>> { struct __compressed_pair<FI_TBestFitStringSelector *, std::default_delete<FI_TBestFitStringSelector>> { struct FI_TBestFitStringSelector *__value_; } __ptr_; } _bestFitAlternateTitleSelector;
}

@property (retain, nonatomic) NSColor *titleColor;
@property (retain, nonatomic) NSColor *alternateTitleColor;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) BOOL acceptsFirstMouse;

+ (Class)cellClass;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id).cxx_construct;
- (void)setAttributedTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)setObjectValue:(id)a0;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)awakeFromNib;
- (void)setAccessibilityElement:(BOOL)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)setAlternateTitle:(id)a0;
- (void)setAttributedAlternateTitle:(id)a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)acceptsFirstMouse;
- (void)initCommon;
- (void)setButtonAction:(const void *)a0;
- (void)setAcceptsFirstMouse:(BOOL)a0;
- (void)awakeCommon;
- (void)updateTitleColor;
- (void)updateAlternateTitleColor;
- (struct unique_ptr<FI_TBestFitStringSelector, std::default_delete<FI_TBestFitStringSelector>> { struct __compressed_pair<FI_TBestFitStringSelector *, std::default_delete<FI_TBestFitStringSelector>> { struct FI_TBestFitStringSelector *x0; } x0; })bestFitSelectorForStringSet:(const void *)a0 attributes:(id)a1 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a2;
- (id)copyButton;
- (void)setTitleStringSet:(const void *)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)setAlternateTitleStringSet:(const void *)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
