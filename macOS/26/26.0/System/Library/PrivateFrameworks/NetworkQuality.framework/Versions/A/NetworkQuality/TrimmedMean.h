@class NSMutableArray;

@interface TrimmedMean : NSObject {
    unsigned long long _arraySize;
    NSMutableArray *_values;
    float _currentAverage;
    float _trimAt;
}

- (void)add:(id)a0;
- (void).cxx_destruct;
- (float)getTrimmedMean;
- (id)initWithSize:(unsigned long long)a0 withTrimAt:(float)a1;

@end
