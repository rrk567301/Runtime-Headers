@class NSUUID, NSString;

@interface AKAvailability : NSObject

@property (readonly, nonatomic, getter=isAvailableToMe) char availableToMe;
@property (readonly, nonatomic) NSUUID *activityIdentifier;
@property (readonly, nonatomic) char personalizedAvailability;
@property (readonly, nonatomic, getter=isAvailable) char available;
@property (readonly, nonatomic) NSString *activityIdentifierString;

+ (id)logger;

- (void).cxx_destruct;
- (id)initWithPublishedStatus:(id)a0;
- (id)_initWithAvailable:(char)a0 activityIdentifierString:(id)a1 personalizedAvailability:(char)a2;
- (id)_payloadDictionary;
- (id)initWithAvailable:(char)a0 activityIdentifier:(id)a1;
- (id)initWithAvailable:(char)a0 activityIdentifierString:(id)a1;
- (id)initWithStatusPayload:(id)a0 invitationPayload:(id)a1;
- (id)statusPublishRequest;

@end
