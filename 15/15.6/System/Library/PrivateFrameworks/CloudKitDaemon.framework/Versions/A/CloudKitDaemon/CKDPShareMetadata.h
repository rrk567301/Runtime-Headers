@class NSString, CKDPZoneSignedCryptoRequirements, NSData, CKDPRecordType, CKDPParticipant;

@interface CKDPShareMetadata : PBCodable <NSCopying> {
    struct { unsigned char participantPermission : 1; unsigned char participantState : 1; unsigned char participantType : 1; } _has;
}

@property (readonly, nonatomic) char hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) char hasProtectedFullToken;
@property (retain, nonatomic) NSData *protectedFullToken;
@property (readonly, nonatomic) char hasOwnerParticipant;
@property (retain, nonatomic) CKDPParticipant *ownerParticipant;
@property (readonly, nonatomic) char hasCallerParticipant;
@property (retain, nonatomic) CKDPParticipant *callerParticipant;
@property (nonatomic) char hasParticipantPermission;
@property (nonatomic) int participantPermission;
@property (nonatomic) char hasParticipantState;
@property (nonatomic) int participantState;
@property (nonatomic) char hasParticipantType;
@property (nonatomic) int participantType;
@property (readonly, nonatomic) char hasRootRecordType;
@property (retain, nonatomic) CKDPRecordType *rootRecordType;
@property (readonly, nonatomic) char hasSignedCryptoRequirements;
@property (retain, nonatomic) CKDPZoneSignedCryptoRequirements *signedCryptoRequirements;

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
- (int)StringAsParticipantPermission:(id)a0;
- (int)StringAsParticipantState:(id)a0;
- (int)StringAsParticipantType:(id)a0;
- (id)_participantPermissionCKLogValue;
- (id)_participantStateCKLogValue;
- (id)_participantTypeCKLogValue;
- (id)participantPermissionAsString:(int)a0;
- (id)participantStateAsString:(int)a0;
- (id)participantTypeAsString:(int)a0;

@end
