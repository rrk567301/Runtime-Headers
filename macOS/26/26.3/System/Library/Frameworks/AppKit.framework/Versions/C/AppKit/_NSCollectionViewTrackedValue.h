@class NSArray;

@interface _NSCollectionViewTrackedValue : NSObject {
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
}

@property (nonatomic) double trackedValue;
@property (nonatomic) BOOL isAccumulating;

- (void)addValue:(double)a0;
- (double)speed;
- (id)init;
- (void).cxx_destruct;

@end
