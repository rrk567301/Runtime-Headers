@class NSArray, SCRO2DBrailleCanvas, SCRO2DBrailleElement;
@protocol SCRO2DBrailleContentProtocol, SCROBrailleDriverProtocol;

@interface SCRO2DBraillePlane : NSObject {
    id<SCROBrailleDriverProtocol> _brailleDriver;
    BOOL _supportsCanvas;
    SCRO2DBrailleCanvas *_canvas;
    id<SCRO2DBrailleContentProtocol> _content;
    NSArray *_brailleLines;
    struct _NSRange { unsigned long long location; unsigned long long length; } _displayedLinesRange;
    NSArray *_elements;
    SCRO2DBrailleElement *_focusedElement;
}

@property (nonatomic) BOOL wordWrapEnabled;

- (void)panRight;
- (void)panLeft;
- (id)initWithDriver:(id)a0;
- (void).cxx_destruct;
- (void)setBrailleData:(id)a0;
- (BOOL)canPanLeft;
- (BOOL)canPanRight;

@end
