@class NSNumber;

@interface ATXContactEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (nonatomic) char isFavoriteContact;
@property (nonatomic) char isVIPContact;
@property (nonatomic) char isEmergencyContact;
@property (nonatomic) char isICloudFamilyMember;
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsClearedForEntity;
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsClearedForEntity;
@property (retain, nonatomic) NSNumber *localNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *globalNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsClearedForEntity;
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *localPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *globalPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsReceivedForEntity;

- (id)init;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)initFromJSON:(id)a0;

@end
