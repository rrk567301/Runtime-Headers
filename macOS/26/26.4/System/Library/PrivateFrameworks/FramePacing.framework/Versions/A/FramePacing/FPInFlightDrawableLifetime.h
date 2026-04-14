@class NSMutableArray;

@interface FPInFlightDrawableLifetime : NSObject {
    unsigned int _surfaceID;
    unsigned long long _drawableID;
    double _waitStartTime;
    double _acquiredTime;
    double _presentCalledTime;
    NSMutableArray *_attributedCommandBuffers;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
