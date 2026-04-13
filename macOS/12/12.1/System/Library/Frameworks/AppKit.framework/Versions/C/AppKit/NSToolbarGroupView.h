@class NSToolbarItemGroup;

@interface NSToolbarGroupView : NSView {
    NSToolbarItemGroup *_groupItem;
    struct __CFArray { } *tooltipTags;
    struct { unsigned char needsSublayout : 1; unsigned int reserved : 31; } _gvFlags;
    SEL action;
}

- (void)dealloc;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)moveRight:(id)a0;
- (void)moveLeft:(id)a0;
- (void)sendAction;
- (id)initWithItem:(id)a0;
- (BOOL)_moveInDirection:(long long)a0;
- (void)performSublayout;
- (void)setNeedsSublayout:(BOOL)a0;

@end
