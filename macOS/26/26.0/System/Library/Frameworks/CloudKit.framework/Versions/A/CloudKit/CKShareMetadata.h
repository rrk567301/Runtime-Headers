@class NSURL, CKShareParticipant, CKRequiredFeatureSet, CKUserIdentity, CKRoughlyEquivalentProperties, CKContainerID, NSString, CKRecordID, CKRecord, NSArray, NSData, CKDeviceToDeviceShareInvitationToken, CKShare, CKRecordZone;

@interface CKShareMetadata : NSObject <CKContainerAssignment, CKRoughlyEquivalent, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) CKContainerID *containerID;
@property (copy, nonatomic) CKShareParticipant *callingParticipant;
@property (copy, nonatomic) NSArray *sharedItemHierarchyIDs;
@property (copy, nonatomic) NSString *rootRecordType;
@property (copy) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (copy, nonatomic) NSString *selectedAccountID;
@property (copy) CKRequiredFeatureSet *requiredFeatures;
@property (copy, nonatomic) NSData *protectedFullToken;
@property (copy) NSData *publicToken;
@property (readonly) NSString *baseToken;
@property (copy) NSData *privateToken;
@property (retain, nonatomic) CKRecordZone *sharedZone;
@property long long participantRole;
@property long long participantStatus;
@property long long participantPermission;
@property (copy, nonatomic) NSArray *outOfNetworkMatches;
@property (copy) CKRecordID *hierarchicalRootRecordID;
@property (copy) CKRecord *rootRecord;
@property (readonly) BOOL isCallingParticipantUsingOTL;
@property (readonly) NSURL *invitationURL;
@property BOOL acceptedInProcess;
@property (copy) NSData *encryptedData;
@property BOOL accessRequestsEnabled;
@property (copy) CKUserIdentity *ownerIdentity;
@property (copy) CKShare *share;
@property (readonly, copy) NSString *containerIdentifier;
@property (readonly) long long participantType;
@property (readonly, copy) CKRecordID *rootRecordID;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (void)initialize;

- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initInternal;
- (id)description;
- (void)CKAssignToContainerWithID:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)environment;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)fillAnonymousCKUserID:(id)a0;
- (id)initWithShare:(id)a0 containerID:(id)a1;
- (void)setContainerID_modelMutation:(id)a0;

@end
