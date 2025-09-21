@class NSUUID, NSSet, NSDictionary;

@interface HMDCharacteristicResponseNotificationContext : HMFObject

@property (readonly, getter=hasPendingMultiPartResponses) char pendingMultiPartResponses;
@property (readonly, copy) NSUUID *requestIdentifier;
@property (readonly, copy) NSSet *changedCharacteristics;
@property (readonly, copy) NSSet *previouslyNilChangedCharacteristics;
@property (readonly, copy) NSDictionary *notificationPayloadByAccessoryUUID;
@property (readonly, copy) NSSet *responseCharacteristics;

+ (id)notificationUpdateMessagePayloadForHome:(id)a0 notificationEnabled:(char)a1 characteristics:(id)a2 characteristicsErrorsMap:(id)a3;
+ (id)responsePayloadForHome:(id)a0 changedAccessories:(id)a1 moreMessagesInMultipart:(id)a2;
+ (id)updateMultipleCharacteristicReadWriteResponsePayload:(id)a0 withUnhandledRequests:(id)a1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithRequestIdentifier:(id)a0 responses:(id)a1 pendingMultiPartResponses:(char)a2;
- (id)notificationWithHome:(id)a0;

@end
