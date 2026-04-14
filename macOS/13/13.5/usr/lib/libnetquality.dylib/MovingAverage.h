@class NSMutableArray;

@interface MovingAverage : NSObject {
    long long _arraySize;
    NSMutableArray *_values;
    float _currentAverage;
}

- (void).cxx_destruct;
- (float)add:(float)a0;
- (id)initWithSize:(long long)a0;
- (float)getAvg;

@end
