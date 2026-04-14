@class NSURL;

@interface MKLinkTextField : NSTextField {
    NSURL *_link;
}

@property (retain, nonatomic) NSURL *link;
@property (copy, nonatomic) id /* block */ blockOnLinkOpened;

- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)setAttributedStringValue:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (id)fontSmoothingBackgroundColor;
- (void)openLink:(id)a0;
- (void)linkifyString;
- (BOOL)autoHandleLinks;
- (void)openLinkAction:(id)a0;

@end
