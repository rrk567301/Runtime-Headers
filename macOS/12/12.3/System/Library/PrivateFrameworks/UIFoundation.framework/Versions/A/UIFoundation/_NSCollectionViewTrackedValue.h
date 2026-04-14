@class NSArray;

@interface _NSCollectionViewTrackedValue : NSObject {
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
}

@property (nonatomic) double trackedValue;
@property (nonatomic) BOOL isAccumulating;

- (id)init;
- (void).cxx_destruct;
- (double)speed;
- (void)addValue:(double)a0;

@end
