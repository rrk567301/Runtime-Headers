@class NSView;
@protocol NSTextInputClient;

@interface LUTextInputClientTextAccessor : LUTextAccessor

@property (retain, nonatomic) NSView<NSTextInputClient> *textInputClientView;

+ (id)attributedSubstringForProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inView:(id)a2;
+ (BOOL)canAccessTextAtLocation:(struct CGPoint { double x0; double x1; })a0;
+ (BOOL)canAccessTextInView:(id)a0;

- (void)dealloc;
- (id)initWithView:(id)a0;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)_termAndTextOrigin:(struct CGPoint { double x0; double x1; } *)a0;
- (id)_termAtLocation:(struct CGPoint { double x0; double x1; })a0 textOrigin:(struct CGPoint { double x0; double x1; } *)a1;
- (id)termForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textOrigin:(struct CGPoint { double x0; double x1; } *)a1;

@end
