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
- (void).cxx_destruct;
- (id)init;

@end
