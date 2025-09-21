@class NSString;

@interface _PFBackgroundRuntimeVoucher : NSObject <PFCoreAnalyticsMetric> {
    NSString *_taskName;
}

@property (nonatomic) unsigned long long sequenceID;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) double cancelTime;
@property (nonatomic) double backgroundTimeRemaining;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_beginPowerAssertionNamed:(id)a0;
+ (void)_endPowerAssertionWithVoucher:(id)a0;

- (id)initWithTask:(id)a0;
- (void)dealloc;
- (id)init;
- (id)createPayload;

@end
