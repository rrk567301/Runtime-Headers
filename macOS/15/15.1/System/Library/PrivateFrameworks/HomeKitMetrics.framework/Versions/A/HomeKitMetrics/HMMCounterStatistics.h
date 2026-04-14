@interface HMMCounterStatistics : NSObject {
    long long _sumOfValues;
}

@property (readonly, nonatomic) long long minValue;
@property (readonly, nonatomic) long long maxValue;
@property (readonly, nonatomic) long long averageValue;
@property (readonly, nonatomic) long long valueCount;

- (id)initWithMinValue:(long long)a0 maxValue:(long long)a1 sumOfValues:(long long)a2 valueCount:(long long)a3;

@end
