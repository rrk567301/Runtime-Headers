@class NSString;

@interface BWCinematicFramingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) unsigned int cinematicFramingMaxPeopleDetected;
@property (copy, nonatomic) NSString *cinematicFramingROIHeatMap;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) unsigned int cinematicFramingControlMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)dealloc;
- (id)init;
- (id)eventName;
- (id)eventDictionary;

@end
