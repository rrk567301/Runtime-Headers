@class NSData, NSString, CKDPShareAccessBlockedRequesters, CKDPProtectionInfoKeysToRemove, CKDPShareAccessRequesters, CKDPCryptoRequirementsSigningKey, CKDPShareIdentifier, CKDPProtectionInfo, NSMutableArray;

@interface CKDPShare : PBCodable <NSCopying> {
    struct { unsigned char participantSelfRemovalBehavior : 1; unsigned char publicAccess : 1; unsigned char publisherModelType : 1; unsigned char allowAnyoneToResolveShare : 1; unsigned char anonymousPublicAccess : 1; unsigned char denyAccessRequests : 1; unsigned char publisherModel : 1; } _has;
}

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic) char hasPublicAccess;
@property (nonatomic) int publicAccess;
@property (readonly, nonatomic) char hasInvitedPcs;
@property (retain, nonatomic) CKDPProtectionInfo *invitedPcs;
@property (readonly, nonatomic) char hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo *selfAddedPcs;
@property (retain, nonatomic) NSMutableArray *participants;
@property (readonly, nonatomic) char hasShortTokenRoutingKey;
@property (retain, nonatomic) NSString *shortTokenRoutingKey;
@property (retain, nonatomic) NSMutableArray *potentialMatchs;
@property (retain, nonatomic) NSMutableArray *invitedKeyToRemoves;
@property (nonatomic) char hasPublisherModel;
@property (nonatomic) char publisherModel;
@property (nonatomic) char hasAnonymousPublicAccess;
@property (nonatomic) char anonymousPublicAccess;
@property (readonly, nonatomic) char hasDisplayedHostname;
@property (retain, nonatomic) NSString *displayedHostname;
@property (nonatomic) char hasPublisherModelType;
@property (nonatomic) int publisherModelType;
@property (nonatomic) char hasParticipantSelfRemovalBehavior;
@property (nonatomic) int participantSelfRemovalBehavior;
@property (nonatomic) char hasDenyAccessRequests;
@property (nonatomic) char denyAccessRequests;
@property (readonly, nonatomic) char hasRequestingAccess;
@property (retain, nonatomic) CKDPShareAccessRequesters *requestingAccess;
@property (readonly, nonatomic) char hasBlockedAccess;
@property (retain, nonatomic) CKDPShareAccessBlockedRequesters *blockedAccess;
@property (readonly, nonatomic) char hasCryptoRequirementsSigningKey;
@property (retain, nonatomic) CKDPCryptoRequirementsSigningKey *cryptoRequirementsSigningKey;
@property (nonatomic) char hasAllowAnyoneToResolveShare;
@property (nonatomic) char allowAnyoneToResolveShare;
@property (readonly, nonatomic) char hasInvitedPcsKeysToRemove;
@property (retain, nonatomic) CKDPProtectionInfoKeysToRemove *invitedPcsKeysToRemove;
@property (readonly, nonatomic) char hasSelfAddedPcsKeysToRemove;
@property (retain, nonatomic) CKDPProtectionInfoKeysToRemove *selfAddedPcsKeysToRemove;
@property (readonly, nonatomic) char hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (readonly, nonatomic) char hasOrigin;
@property (retain, nonatomic) NSString *origin;

+ (Class)participantType;
+ (Class)invitedKeyToRemoveType;
+ (Class)potentialMatchType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)addParticipant:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearParticipants;
- (unsigned long long)participantsCount;
- (int)StringAsPublicAccess:(id)a0;
- (int)StringAsParticipantSelfRemovalBehavior:(id)a0;
- (int)StringAsPublisherModelType:(id)a0;
- (id)_publicAccessCKLogValue;
- (void)addInvitedKeyToRemove:(id)a0;
- (void)addPotentialMatch:(id)a0;
- (void)clearInvitedKeyToRemoves;
- (void)clearPotentialMatchs;
- (id)invitedKeyToRemoveAtIndex:(unsigned long long)a0;
- (unsigned long long)invitedKeyToRemovesCount;
- (id)participantAtIndex:(unsigned long long)a0;
- (id)participantSelfRemovalBehaviorAsString:(int)a0;
- (id)potentialMatchAtIndex:(unsigned long long)a0;
- (unsigned long long)potentialMatchsCount;
- (id)publicAccessAsString:(int)a0;
- (id)publisherModelTypeAsString:(int)a0;

@end
