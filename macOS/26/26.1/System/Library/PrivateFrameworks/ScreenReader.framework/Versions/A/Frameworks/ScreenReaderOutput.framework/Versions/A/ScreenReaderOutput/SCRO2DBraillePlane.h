@class NSArray, SCRO2DBrailleCanvas, SCRO2DBrailleElement;
@protocol SCRO2DBrailleContentProtocol, SCROBrailleDriverProtocol;

@interface SCRO2DBraillePlane : NSObject {
    id<SCROBrailleDriverProtocol> _brailleDriver;
    BOOL _supportsCanvas;
    SCRO2DBrailleCanvas *_canvas;
    id<SCRO2DBrailleContentProtocol> _content;
    BOOL _shouldUseMultiRow;
    NSArray *_brailleLines;
    struct _NSRange { unsigned long long location; unsigned long long length; } _displayedLinesRange;
    NSArray *_elements;
    SCRO2DBrailleElement *_focusedElement;
}

@property (nonatomic) BOOL wordWrapEnabled;

- (void)refresh;
- (void)panLeft;
- (id)initWithDriver:(id)a0;
- (void).cxx_destruct;
- (void)panRight;
- (void)setBrailleData:(id)a0;
- (BOOL)_isPlanarCapable;
- (BOOL)canPanLeft;
- (BOOL)canPanRight;
- (id)createContentWithBrailleData:(id)a0 width:(long long)a1 height:(long long)a2 canvas:(id)a3;

@end
