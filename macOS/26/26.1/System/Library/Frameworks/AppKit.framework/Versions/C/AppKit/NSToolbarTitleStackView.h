@class NSView;

@interface NSToolbarTitleStackView : NSView {
    NSView *_primaryTitleView;
    NSView *_primaryTextField;
    NSView *_subtitleView;
}

@property (retain) NSView *primaryTitleView;
@property (retain) NSView *subtitleView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)declaredLayoutConstraints;
- (void)setPrimaryTitleView:(id)a0 textField:(id)a1;

@end
