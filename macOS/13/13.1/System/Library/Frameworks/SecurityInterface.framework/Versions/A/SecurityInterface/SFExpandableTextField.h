@class NSAttributedString;

@interface SFExpandableTextField : NSTextField {
    BOOL _minimized;
    BOOL _isURLText;
    NSAttributedString *_fullString;
}

- (void)dealloc;
- (void)resetCursorRects;
- (void)mouseDown:(id)a0;
- (void)awakeFromNib;
- (void)setMinimized:(BOOL)a0;
- (BOOL)minimized;
- (void)setAttributedStringValue:(id)a0;
- (id)_expandableAttributedString:(id)a0;
- (BOOL)isURLText;
- (BOOL)_isURLString:(id)a0;
- (id)_encodedURLString;

@end
