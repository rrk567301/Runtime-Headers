@class NSString, NSNumber, NSDictionary;

@interface IDSRegistrationDailyPNRStatusMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) char pnrCurrentlyRegistered;
@property (readonly, nonatomic) char pnrRegisteredToday;
@property (readonly, nonatomic) NSString *pnrMechanism;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) char hasMultipleSIMs;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPNRCurrentlyRegistered:(char)a0 pnrRegisteredToday:(char)a1 pnrMechanism:(id)a2 errorCode:(id)a3 hasMultipleSIMs:(char)a4;

@end
