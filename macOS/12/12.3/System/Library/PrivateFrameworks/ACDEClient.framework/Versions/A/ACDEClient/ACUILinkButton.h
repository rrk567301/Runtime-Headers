@class NSColor;

@interface ACUILinkButton : NSButton

@property (retain, nonatomic) NSColor *textColor;

- (void)dealloc;
- (void)resetCursorRects;
- (void)mouseDown:(id)a0;
- (void)awakeFromNib;
- (void)mouseUp:(id)a0;
- (void)updateTextColor;
- (id)alternateTextColor;

@end
