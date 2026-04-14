@class NSColor;

@interface ACUILinkButton : NSButton

@property (retain, nonatomic) NSColor *textColor;

- (void)mouseUp:(id)a0;
- (void)mouseDown:(id)a0;
- (void)dealloc;
- (void)awakeFromNib;
- (void)resetCursorRects;
- (void)updateTextColor;
- (id)alternateTextColor;

@end
