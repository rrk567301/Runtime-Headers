@class NSString, HDCodableSharingSetupMetadata, NSData, NSMutableArray;

@interface HDCodableSummarySharingEntry : PBCodable <NSCopying> {
    struct { unsigned char dateAccepted : 1; unsigned char dateInvited : 1; unsigned char dateModified : 1; unsigned char direction : 1; unsigned char notificationStatus : 1; unsigned char status : 1; unsigned char type : 1; unsigned char userWheelchairMode : 1; } _has;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasPrimaryContactIdentifier;
@property (retain, nonatomic) NSString *primaryContactIdentifier;
@property (retain, nonatomic) NSMutableArray *allContactIdentifiers;
@property (readonly, nonatomic) char hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) char hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasDirection;
@property (nonatomic) int direction;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) char hasSharingSetupMetadata;
@property (retain, nonatomic) HDCodableSharingSetupMetadata *sharingSetupMetadata;
@property (nonatomic) char hasDateModified;
@property (nonatomic) double dateModified;
@property (retain, nonatomic) NSMutableArray *authorizationCategories;
@property (nonatomic) char hasDateAccepted;
@property (nonatomic) double dateAccepted;
@property (nonatomic) char hasDateInvited;
@property (nonatomic) double dateInvited;
@property (readonly, nonatomic) char hasInvitationUUID;
@property (retain, nonatomic) NSString *invitationUUID;
@property (readonly, nonatomic) char hasCloudKitIdentifier;
@property (retain, nonatomic) NSString *cloudKitIdentifier;
@property (readonly, nonatomic) char hasOwnerParticipant;
@property (retain, nonatomic) NSData *ownerParticipant;
@property (nonatomic) char hasNotificationStatus;
@property (nonatomic) int notificationStatus;
@property (retain, nonatomic) NSMutableArray *sharingAuthorizations;
@property (nonatomic) char hasUserWheelchairMode;
@property (nonatomic) int userWheelchairMode;

+ (Class)allContactIdentifiersType;
+ (Class)authorizationCategoriesType;
+ (Class)sharingAuthorizationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (id)typeAsString:(int)a0;
- (char)isEquivalent:(id)a0;
- (int)StringAsDirection:(id)a0;
- (int)StringAsUserWheelchairMode:(id)a0;
- (int)StringAsNotificationStatus:(id)a0;
- (id)authorizationCategoriesAtIndex:(unsigned long long)a0;
- (void)addAllContactIdentifiers:(id)a0;
- (void)addAuthorizationCategories:(id)a0;
- (void)addSharingAuthorizations:(id)a0;
- (id)allContactIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)allContactIdentifiersCount;
- (unsigned long long)authorizationCategoriesCount;
- (void)clearAllContactIdentifiers;
- (void)clearAuthorizationCategories;
- (void)clearSharingAuthorizations;
- (id)directionAsString:(int)a0;
- (id)initWithUUID:(id)a0 invitationUUID:(id)a1 cloudKitIdentifier:(id)a2 primaryContactIdentifier:(id)a3 allContactIdentifiers:(id)a4 firstName:(id)a5 lastName:(id)a6 sharingAuthorizations:(id)a7 userWheelchairMode:(long long)a8 type:(long long)a9 direction:(unsigned long long)a10 status:(long long)a11 notificationStatus:(long long)a12 dateModified:(id)a13 dateInvited:(id)a14 dateAccepted:(id)a15 setupMetadata:(id)a16 ownerParticipant:(id)a17;
- (char)isEqualFirstName:(id)a0 lastName:(id)a1;
- (id)notificationStatusAsString:(int)a0;
- (id)shareOwnerParticipant;
- (id)sharingAuthorizationsAtIndex:(unsigned long long)a0;
- (unsigned long long)sharingAuthorizationsCount;
- (id)sharingEntry;
- (id)sharingRecipientIdentifier;
- (id)userWheelchairModeAsString:(int)a0;

@end
