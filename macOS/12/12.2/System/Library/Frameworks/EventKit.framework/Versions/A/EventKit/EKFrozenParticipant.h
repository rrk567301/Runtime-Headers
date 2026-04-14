@class NSString, NSDictionary, NSURL, NSDate, NSManagedObjectID;

@interface EKFrozenParticipant : EKFrozenObject <EKProtocolParticipant>

@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, nonatomic) BOOL replyRequested;
@property (readonly, nonatomic) BOOL scheduleForceSend;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSDate *statusModifiedDate;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *inviterNameString;
@property (readonly, nonatomic) NSDate *proposedStartDateUnadjustedFromUTC;
@property (readonly, nonatomic) NSDate *proposedEndDateUnadjustedFromUTC;
@property (readonly, nonatomic) NSString *proposalStatusString;
@property (readonly, nonatomic) NSString *comment;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly, nonatomic) NSString *scheduleStatusString;
@property (readonly, nonatomic) NSString *encodedLikenessData;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;
- (id)initWithName:(id)a0 url:(id)a1 emailAddress:(id)a2 phoneNumber:(id)a3 role:(id)a4 status:(id)a5 type:(int)a6 encodedLikenessData:(id)a7 isCurrentUser:(BOOL)a8;

@end
