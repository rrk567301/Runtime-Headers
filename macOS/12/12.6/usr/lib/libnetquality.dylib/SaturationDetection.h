@class NSMutableArray;

@interface SaturationDetection : NSObject {
    long long _arraySize;
    NSMutableArray *_values;
    int state;
    float _previousAverage;
    float _currentAverage;
    float _saturationValue;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)add:(float)a0;
- (float)getSaturation;
- (float)getAverage;
- (id)initWithAverageSpan:(long long)a0;

@end
