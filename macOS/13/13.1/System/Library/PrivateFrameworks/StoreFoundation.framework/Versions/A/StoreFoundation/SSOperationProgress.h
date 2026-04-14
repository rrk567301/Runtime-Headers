@class NSMutableArray;

@interface SSOperationProgress : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL canPause;
@property (nonatomic) long long operationType;
@property (nonatomic) double changeRate;
@property (nonatomic) double currentValue;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) double maxValue;
@property (nonatomic) long long units;
@property (nonatomic) double normalizedCurrentValue;
@property (nonatomic) double normalizedMaxValue;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)snapshot;
- (void)resetSnapshots;
- (void)_updateStatisticsFromSnapshots;

@end
