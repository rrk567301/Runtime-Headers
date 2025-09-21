@class QCIndexPort;

@interface QCFPSDisplay : QCPatch {
    QCIndexPort *inputMode;
    unsigned long long _frameCount;
    float _fps;
    float _fpsMin;
    double _lastTime;
    double _fpsTime;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (void)enable:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
