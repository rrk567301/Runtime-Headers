@class NSMutableDictionary;

@interface HMDCameraSignificantEventNotificationFilter : HMFObject

@property (readonly, nonatomic) NSMutableDictionary *primaryResidentSignificantEventNotificationsByUUID;
@property (readonly, nonatomic) NSMutableDictionary *cloudSignificantEventsByUUID;

+ (BOOL)isRelevantSignificantEventDate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addIncomingPrimaryResidentSignificantEventNotificationWithUUID:(id)a0 notificationReasons:(unsigned long long)a1 date:(id)a2;
- (void)addIncomingCloudSignificantEvent:(id)a0;
- (id)consumePrimaryResidentSignificantEventWithUUID:(id)a0;
- (id)consumeCloudSignificantEventWithUUID:(id)a0;
- (BOOL)_isSignificantEventRelevantWithUUID:(id)a0 isFromPrimary:(BOOL)a1;
- (void)_prunePrimaryResidentSignificantEvents;
- (void)_pruneCloudSignificantEvents;

@end
