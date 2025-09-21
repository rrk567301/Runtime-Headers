@class NSString, NSSet, NSData, NSDate;

@interface Channel : NSManagedObject

@property (class, readonly, nonatomic) NSString *identifierKeyPath;
@property (class, readonly, nonatomic) NSString *personalKeyPath;
@property (class, readonly, nonatomic) NSString *decomissionedKeyPath;
@property (class, readonly, nonatomic) NSString *statusTypeKeyPath;
@property (class, readonly, nonatomic) NSString *presenceIdentifierKeyPath;
@property (class, readonly, nonatomic) NSString *encryptionKeysKeyPath;
@property (class, readonly, nonatomic) NSString *channelTypeKeyPath;

@property (retain, nonatomic) NSData *channelToken;
@property (nonatomic) short channelType;
@property (retain, nonatomic) NSData *currentOutgoingRatchetState;
@property (copy, nonatomic) NSDate *dateChannelCreated;
@property (nonatomic) char decomissioned;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *membershipKey;
@property (retain, nonatomic) NSData *peerKey;
@property (nonatomic) char personal;
@property (copy, nonatomic) NSString *presenceIdentifier;
@property (retain, nonatomic) NSData *serverKey;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *statusType;
@property (retain, nonatomic) NSSet *generatedEncryptionKeys;
@property (retain, nonatomic) NSSet *invitedUsers;
@property (retain, nonatomic) NSSet *receivedInvitations;

+ (id)fetchRequest;
+ (id)predicateForChannelTypePresence;
+ (id)predicateForPresenceIdentifier:(id)a0;
+ (id)dateChannelCreatedKeyPath;
+ (id)predicateForChannelIdentifier:(id)a0;
+ (id)predicateForChannelTypeStatus;
+ (id)predicateForCreationDateNotNil;
+ (id)predicateForDecomissioned:(char)a0;
+ (id)predicateForPersonal:(char)a0;
+ (id)predicateForStatusTypeIdentifier:(id)a0;
+ (id)sortDescriptorForChannelIdentifierOrderedAscending:(char)a0;
+ (id)sortDescriptorForCreationDateAscending:(char)a0;
+ (id)sortDescriptorForPersonalOrderedAscending:(char)a0;
+ (id)sortDescriptorForStatusTypeIdentifierOrderedAscending:(char)a0;

@end
