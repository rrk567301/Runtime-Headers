@class MovingAverage;

@interface SaturationDetection : NSObject {
    MovingAverage *_movingAvg;
    MovingAverage *_instAvg;
    long long _instValues;
    int state;
    float _previousAverage;
    float _currentAverage;
    float _saturationValue;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)add:(float)a0;
- (float)getAverage;
- (float)getSaturation;

@end
