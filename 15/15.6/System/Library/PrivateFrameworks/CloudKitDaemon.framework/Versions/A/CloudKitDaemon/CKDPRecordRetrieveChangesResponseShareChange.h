@class CKDPShareIdentifier, CKDPShare;

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying> {
    struct { unsigned char changeType : 1; } _has;
}

@property (readonly, nonatomic) char hasShareIdentifier;
@property (retain, nonatomic) CKDPShareIdentifier *shareIdentifier;
@property (nonatomic) char hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) char hasShare;
@property (retain, nonatomic) CKDPShare *share;

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
- (int)StringAsChangeType:(id)a0;
- (id)changeTypeAsString:(int)a0;

@end
