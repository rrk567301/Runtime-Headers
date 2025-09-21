@class NSAttributedString;

@interface SFExpandableTextField : NSTextField {
    char _minimized;
    char _isURLText;
    NSAttributedString *_fullString;
}

- (void)dealloc;
- (void)awakeFromNib;
- (char)minimized;
- (void)mouseDown:(id)a0;
- (void)resetCursorRects;
- (void)setAttributedStringValue:(id)a0;
- (void)setMinimized:(char)a0;
- (char)_isURLString:(id)a0;
- (id)_encodedURLString;
- (id)_expandableAttributedString:(id)a0;
- (char)isURLText;

@end
