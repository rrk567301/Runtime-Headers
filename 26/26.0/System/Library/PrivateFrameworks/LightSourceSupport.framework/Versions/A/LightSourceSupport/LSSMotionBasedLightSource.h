@class LSSSettings;

@interface LSSMotionBasedLightSource : NSObject {
    long long _lightSourceState;
    struct { void /* unknown type, empty encoding */ vector; } _lightOrientationInLocalSpace;
    struct { void /* unknown type, empty encoding */ vector; } _currentLightOrientation;
    double _previousTimestamp;
    double _elapsedWaitTime;
    double _cosLargeAngle;
    double _cosSmallAngle;
    LSSSettings *_settings;
    double _intensity;
    void /* unknown type, empty encoding */ _direction;
}

- (id)init;
- (void).cxx_destruct;

@end
