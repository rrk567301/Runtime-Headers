@class NSNumber;

@interface MTRSubscribeParams : MTRReadParams <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSNumber *keepPreviousSubscriptions;
@property (copy, nonatomic) NSNumber *autoResubscribe;
@property (nonatomic, getter=shouldReplaceExistingSubscriptions) char replaceExistingSubscriptions;
@property (nonatomic, getter=shouldResubscribeAutomatically) char resubscribeAutomatically;
@property (copy, nonatomic) NSNumber *minInterval;
@property (copy, nonatomic) NSNumber *maxInterval;
@property (nonatomic, getter=shouldReportEventsUrgently) char reportEventsUrgently;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMinInterval:(id)a0 maxInterval:(id)a1;
- (void)toReadPrepareParams:(void *)a0;

@end
