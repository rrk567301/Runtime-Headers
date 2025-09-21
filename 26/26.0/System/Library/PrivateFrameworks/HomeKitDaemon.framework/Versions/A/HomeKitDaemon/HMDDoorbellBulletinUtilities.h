@class NSString;

@interface HMDDoorbellBulletinUtilities : HMFObject <HMFLogging, HMDDoorbellBulletinUtilities>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_mostRelevantSignificantEventsForDoorbellPressAtDate:(id)a0 fromSignificantEvents:(id)a1;
+ (id)_relevantSignificantEventDateIntervalForDoorbellPressAtDate:(id)a0;

- (id)_localizedDoorbellMessageForSignificantEvents:(id)a0 forAudioAccessory:(BOOL)a1;
- (id)clipUUIDsForCoalesceableSignificantEvents:(id)a0;
- (void)fetchSignificantEventsRelevantToDoorbellPressAtDate:(id)a0 forCameraProfile:(id)a1 completion:(id /* block */)a2;
- (id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)a0;
- (id)localizedDoorbellMessageForSignificantEvents:(id)a0;
- (id)localizedMessageForCharacteristic:(id)a0;
- (id)significantEventsRelevantToDoorbellPressAtDate:(id)a0 forCameraProfile:(id)a1;

@end
