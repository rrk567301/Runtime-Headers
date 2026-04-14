@class NSImageView, NSArray, NSTextField, NSAutounbinder;

@interface NSTableCellView : NSView {
    NSAutounbinder *_autounbinder;
    NSTextField *_textField;
    NSImageView *_imageView;
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

- (oneway void)release;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)firstBaselineOffsetFromTop;
- (BOOL)isOpaque;
- (void)viewDidMoveToWindow;
- (id)_autounbinder;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewWillDraw;
- (void)_windowChangedKeyState;
- (BOOL)preservesContentDuringLiveResize;
- (void)viewDidMoveToSuperview;
- (void)_setBackgroundStyleForSubtree:(long long)a0;
- (void)_updateFont;
- (void)_sendViewWillDraw;
- (id)_enclosingTableView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageViewFrame;
- (double)_imageToTextOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textFieldFrame;
- (void)_updateGroupRowAttributesInRowView:(id)a0;
- (void)_updateSourceListAttributesInRowView:(id)a0;
- (id)_enclosingRowView;
- (void)_updateSourceListAttributesIfNecessary;
- (void)_updateGroupRowAttributesAndScheduleLayout;
- (void)_setIsGroupRow:(BOOL)a0 isSourceList:(BOOL)a1 followsKeyState:(BOOL)a2;

@end
