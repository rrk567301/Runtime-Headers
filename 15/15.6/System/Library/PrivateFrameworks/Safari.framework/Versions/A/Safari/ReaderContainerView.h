@class ReaderWKView;

@interface ReaderContainerView : NSView

@property (weak, nonatomic) ReaderWKView *readerWKView;

- (void).cxx_destruct;
- (char)acceptsFirstResponder;
- (char)becomeFirstResponder;

@end
