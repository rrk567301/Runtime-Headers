@class NSString, NSDictionary, NSError, NSNumber;

@interface AAFAnalyticsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double eventCreationTime;
@property (nonatomic) unsigned long long initTime;
@property (nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } clock_timebase;
@property (copy, nonatomic) NSError *topLevelError;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSDictionary *reportData;
@property (readonly, copy, nonatomic) NSNumber *eventCategory;
@property (copy, nonatomic) NSNumber *clientType;
@property (copy, nonatomic) NSString *clientBundleId;
@property (copy, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSString *altDSID;

+ (id)ak_analyticsEventWithContext:(id)a0 client:(id)a1 eventName:(id)a2 error:(id)a3;
+ (id)ak_analyticsEventWithContext:(id)a0 eventName:(id)a1 error:(id)a2;
+ (id)ak_analyticsEventWithEventName:(id)a0 account:(id)a1 error:(id)a2;
+ (id)ak_analyticsEventWithEventName:(id)a0 error:(id)a1;
+ (id)encodedURLWithPrefix:(id)a0 url:(id)a1;
+ (id)analyticsEventWithName:(id)a0 eventCategory:(id)a1 followupAnalyticsData:(id)a2 altDSID:(id)a3;
+ (id)analyticsEventWithName:(id)a0 eventCategory:(id)a1 initData:(id)a2;
+ (id)analyticsEventWithName:(id)a0 eventCategory:(id)a1 initData:(id)a2 altDSID:(id)a3;

- (void)ak_updateTelemetryIdWithAccount:(id)a0;
- (void)ak_updateWithAuthenticationResults:(id)a0 authContext:(id)a1 error:(id)a2;
- (id)objectForKeyedSubscript:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 eventCategory:(id)a1 initData:(id)a2;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)a0;
- (id)initWithEventName:(id)a0 eventCategory:(id)a1 initData:(id)a2 altDSID:(id)a3;
- (double)machAbsoluteTimeToMilliseconds:(unsigned long long)a0;
- (void)_populateUnderlyingErrorsStartingWithRootError:(id)a0 maxDepth:(unsigned int)a1;
- (void)_updateAnalyticsEventWithFollowupAnalyticsInfo:(id)a0;
- (void)completeEvent;
- (double)machAbsoluteTimeToSeconds:(unsigned long long)a0;

@end
