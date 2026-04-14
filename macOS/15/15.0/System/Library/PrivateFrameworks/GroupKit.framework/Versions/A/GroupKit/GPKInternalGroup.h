@class NSUUID, NSString, NSData, NSDate, NSArray;

@interface GPKInternalGroup : NSManagedObject

@property (nonatomic) float clientModelVersion;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSUUID *dedupeID;
@property (nonatomic, copy) NSString *groupDomain;
@property (nonatomic, copy) NSUUID *groupID;
@property (nonatomic) long long groupMode;
@property (nonatomic, copy) NSData *invitationBlob;
@property (nonatomic, copy) NSUUID *invitationID;
@property (nonatomic, copy) NSString *invitationSenderHandle;
@property (nonatomic) long long joinState;
@property (nonatomic) long long lastKnownRSVPQueueSeqNumber;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic) long long version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
