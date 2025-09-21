@class QCColorPort;

@interface QCClear : QCRenderingPatch {
    QCColorPort *inputColor;
    char _clearDepthBuffer;
    char _clearColorBuffer;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)setup:(id)a0;
- (char)allowsScissors:(id)a0;
- (char)clearsColorBuffer;
- (char)clearsDepthBuffer;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setClearsColorBuffer:(char)a0;
- (void)setClearsDepthBuffer:(char)a0;

@end
