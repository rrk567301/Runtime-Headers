@class NSNumber;

@interface MTRSubscribeParams : MTRReadParams <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *keepPreviousSubscriptions;
@property (copy, nonatomic) NSNumber *autoResubscribe;
@property (nonatomic, getter=shouldReplaceExistingSubscriptions) BOOL replaceExistingSubscriptions;
@property (nonatomic, getter=shouldResubscribeAutomatically) BOOL resubscribeAutomatically;
@property (copy, nonatomic) NSNumber *minInterval;
@property (copy, nonatomic) NSNumber *maxInterval;
@property (nonatomic, getter=shouldReportEventsUrgently) BOOL reportEventsUrgently;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMinInterval:(id)a0 maxInterval:(id)a1;
- (void)toReadPrepareParams:(void *)a0;

@end
