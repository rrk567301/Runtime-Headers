@class NSString;

@interface SecureBackupEscrowReason : PBCodable <NSCopying> {
    struct { unsigned char reason : 1; } _has;
}

@property (nonatomic) char hasReason;
@property (nonatomic) int reason;
@property (readonly, nonatomic) char hasExpectedFederationID;
@property (retain, nonatomic) NSString *expectedFederationID;

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
- (int)StringAsReason:(id)a0;
- (id)reasonAsString:(int)a0;

@end
