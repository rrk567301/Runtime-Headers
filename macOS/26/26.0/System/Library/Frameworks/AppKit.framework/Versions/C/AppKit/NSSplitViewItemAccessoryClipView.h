@class NSView, NSTitlebarSeparatorView, NSLayoutConstraint;

@interface NSSplitViewItemAccessoryClipView : NSView {
    NSView *_documentView;
    NSLayoutConstraint *_documentHeightConstraint;
    NSTitlebarSeparatorView *_titlebarSeparator;
    NSLayoutConstraint *_separatorLeadingConstraint;
    NSLayoutConstraint *_separatorTrailingConstraint;
    unsigned long long _placement;
    unsigned char _alignmentSatisfied : 1;
    unsigned char _showsTitlebarSeparator : 1;
    unsigned char _collapsed : 1;
}

@property (retain) NSView *documentView;
@property (readonly) unsigned long long placement;
@property BOOL showsTitlebarSeparator;
@property BOOL alignmentSatisfied;
@property (getter=isCollapsed) BOOL collapsed;

+ (BOOL)clipsToBounds;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_addTitlebarSeparator;
- (void)_updateSeparatorState;
- (id)initWithPlacement:(unsigned long long)a0;
- (void)setCollapsed:(BOOL)a0 animated:(BOOL)a1;

@end
