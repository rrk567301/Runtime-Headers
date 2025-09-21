@class NSString, NSMutableArray, NSData;

@interface HDCloudSyncCodableSharedSummaryParticipantRecord : PBCodable <NSCopying> {
    struct { unsigned char direction : 1; unsigned char entryAcceptanceDate : 1; unsigned char entryInvitationDate : 1; unsigned char entryModificationDate : 1; unsigned char notificationStatus : 1; unsigned char status : 1; unsigned char type : 1; unsigned char userWheelchairMode : 1; } _has;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasContactIdentifier;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) char hasAuthorizationRecordIdentifier;
@property (retain, nonatomic) NSString *authorizationRecordIdentifier;
@property (readonly, nonatomic) char hasCloudKitIdentifier;
@property (retain, nonatomic) NSString *cloudKitIdentifier;
@property (readonly, nonatomic) char hasInvitationUUID;
@property (retain, nonatomic) NSString *invitationUUID;
@property (readonly, nonatomic) char hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) char hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSMutableArray *allContactIdentifiers;
@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (nonatomic) char hasDirection;
@property (nonatomic) long long direction;
@property (nonatomic) char hasStatus;
@property (nonatomic) long long status;
@property (nonatomic) char hasNotificationStatus;
@property (nonatomic) long long notificationStatus;
@property (nonatomic) char hasEntryModificationDate;
@property (nonatomic) double entryModificationDate;
@property (nonatomic) char hasEntryInvitationDate;
@property (nonatomic) double entryInvitationDate;
@property (nonatomic) char hasEntryAcceptanceDate;
@property (nonatomic) double entryAcceptanceDate;
@property (readonly, nonatomic) char hasOwnerParticipant;
@property (retain, nonatomic) NSData *ownerParticipant;
@property (readonly, nonatomic) char hasSetupMetadata;
@property (retain, nonatomic) NSData *setupMetadata;
@property (nonatomic) char hasUserWheelchairMode;
@property (nonatomic) long long userWheelchairMode;

+ (Class)allContactIdentifiersType;

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
- (void)addAllContactIdentifiers:(id)a0;
- (id)allContactIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)allContactIdentifiersCount;
- (void)clearAllContactIdentifiers;

@end
