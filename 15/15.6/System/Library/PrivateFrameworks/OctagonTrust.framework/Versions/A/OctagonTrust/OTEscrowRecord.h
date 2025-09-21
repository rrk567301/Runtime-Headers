@class OTEscrowRecordMetadata, NSString;

@interface OTEscrowRecord : PBCodable <NSCopying> {
    struct { unsigned char coolOffEnd : 1; unsigned char creationDate : 1; unsigned char remainingAttempts : 1; unsigned char silentAttemptAllowed : 1; unsigned char recordStatus : 1; unsigned char recordViability : 1; unsigned char recoveryStatus : 1; unsigned char viabilityStatus : 1; } _has;
}

@property (nonatomic) char hasCreationDate;
@property (nonatomic) unsigned long long creationDate;
@property (nonatomic) char hasRemainingAttempts;
@property (nonatomic) unsigned long long remainingAttempts;
@property (readonly, nonatomic) char hasEscrowInformationMetadata;
@property (retain, nonatomic) OTEscrowRecordMetadata *escrowInformationMetadata;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) char hasSilentAttemptAllowed;
@property (nonatomic) unsigned long long silentAttemptAllowed;
@property (nonatomic) char hasRecordStatus;
@property (nonatomic) int recordStatus;
@property (readonly, nonatomic) char hasRecordId;
@property (retain, nonatomic) NSString *recordId;
@property (nonatomic) char hasRecoveryStatus;
@property (nonatomic) int recoveryStatus;
@property (nonatomic) char hasCoolOffEnd;
@property (nonatomic) unsigned long long coolOffEnd;
@property (readonly, nonatomic) char hasSerialNumber;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) char hasRecordViability;
@property (nonatomic) int recordViability;
@property (nonatomic) char hasViabilityStatus;
@property (nonatomic) int viabilityStatus;
@property (readonly, nonatomic) char hasFederationId;
@property (retain, nonatomic) NSString *federationId;
@property (readonly, nonatomic) char hasExpectedFederationId;
@property (retain, nonatomic) NSString *expectedFederationId;

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
- (int)StringAsRecordViability:(id)a0;
- (int)StringAsViabilityStatus:(id)a0;
- (int)StringAsRecordStatus:(id)a0;
- (int)StringAsRecoveryStatus:(id)a0;
- (id)recordStatusAsString:(int)a0;
- (id)recordViabilityAsString:(int)a0;
- (id)recoveryStatusAsString:(int)a0;
- (id)viabilityStatusAsString:(int)a0;

@end
