@class WebFrameView;

@interface LUWebFrameViewTextAccessor : LUTextAccessor

@property (retain, nonatomic) WebFrameView *webFrameView;

+ (id)DOMRangeFromNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 domNode:(id)a1 representation:(id)a2;
+ (id)WebHTMLViewAtLocation:(struct CGPoint { double x0; double x1; })a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })NSRangeFromDOMRange:(id)a0 withRepresentation:(id)a1;
+ (BOOL)canAccessTextAtLocation:(struct CGPoint { double x0; double x1; })a0;
+ (BOOL)canAccessTextInView:(id)a0;
+ (id)nextDOMTextNode:(id)a0;
+ (id)paragraphContainingNode:(id)a0;
+ (id)previousDOMTextNode:(id)a0;
+ (id)textContentOfNode:(id)a0 withRepresentation:(id)a1;
+ (id)textContentOfRange:(id)a0 withRepresentation:(id)a1;

- (void)dealloc;
- (id)initWithView:(id)a0;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)_termAndTextOrigin:(struct CGPoint { double x0; double x1; } *)a0;
- (id)_termAtLocation:(struct CGPoint { double x0; double x1; })a0 textOrigin:(struct CGPoint { double x0; double x1; } *)a1;
- (id)termForRange:(id)a0 textOrigin:(struct CGPoint { double x0; double x1; } *)a1;

@end
