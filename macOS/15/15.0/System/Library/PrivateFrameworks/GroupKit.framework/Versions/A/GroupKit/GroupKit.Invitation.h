@class NSData, NSString, NSArray;

@interface GroupKit.Invitation : NSManagedObject

@property (nonatomic) float clientModelVersion;
@property (nonatomic, copy) NSData *groupBlob;
@property (nonatomic, copy) NSString *groupDomain;
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic) long long groupMode;
@property (nonatomic, copy) NSData *invitationBlob;
@property (nonatomic) long long invitationGroupVersion;
@property (nonatomic, copy) NSString *invitationID;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, copy) NSString *senderHandle;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
