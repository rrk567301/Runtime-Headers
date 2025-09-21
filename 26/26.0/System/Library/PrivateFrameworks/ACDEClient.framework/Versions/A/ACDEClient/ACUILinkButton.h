@class NSColor;

@interface ACUILinkButton : NSButton

@property (retain, nonatomic) NSColor *textColor;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)dealloc;
- (void)awakeFromNib;
- (void)resetCursorRects;
- (void)updateTextColor;
- (id)alternateTextColor;

@end
