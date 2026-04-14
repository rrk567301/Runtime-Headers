@class NSImageView, NSArray, NSTextField, NSAutounbinder, NSTintConfiguration;

@interface NSTableCellView : NSView {
    NSAutounbinder *_autounbinder;
    NSTextField *_textField;
    NSImageView *_imageView;
    NSTintConfiguration *_tintConfiguration;
    long long _rowSizeStyle;
    long long _backgroundStyle;
    struct { unsigned char doingLayout : 1; unsigned char isGroupRow : 1; unsigned char isSourceList : 1; unsigned char followsKeyState : 1; } _cellFlags;
}

@property (retain) id objectValue;
@property NSTextField *textField;
@property NSImageView *imageView;
@property long long backgroundStyle;
@property long long rowSizeStyle;
@property (readonly) NSArray *draggingImageComponents;

- (BOOL)isOpaque;
- (void)didChangeValueForKey:(id)a0;
- (void)layout;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (oneway void)release;
- (double)firstBaselineOffsetFromTop;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textFieldFrame;
- (id)_autounbinder;
- (id)_enclosingRowView;
- (id)_enclosingTableView;
- (double)_imageToTextOffset;
- (void)_sendViewWillDraw;
- (void)_setBackgroundStyleForSubtree:(long long)a0;
- (void)_setIsGroupRow:(BOOL)a0 isSourceList:(BOOL)a1 followsKeyState:(BOOL)a2;
- (id)_textFieldForStyling;
- (void)_updateFont;
- (void)_updateGroupRowAttributesAndScheduleLayout;
- (void)_updateGroupRowAttributesInRowView:(id)a0;
- (void)_updateSourceListAttributesIfNecessary;
- (void)_updateSourceListAttributesInRowView:(id)a0;
- (void)_updateViewsForTintConfiguration;
- (void)_windowChangedKeyState;
- (BOOL)preservesContentDuringLiveResize;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTintConfiguration:(id)a0;
- (id)tintConfiguration;
- (void)viewWillDraw;

@end
