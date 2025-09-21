@class QCIndexPort, QCNumberPort;

@interface QCAnchorPosition : QCPatch {
    QCIndexPort *inputMode;
    QCNumberPort *inputX;
    QCNumberPort *inputY;
    QCNumberPort *inputWidth;
    QCNumberPort *inputHeight;
    QCNumberPort *outputX;
    QCNumberPort *outputY;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
