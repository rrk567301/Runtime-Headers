@class CKDPShareIdentifier, CKDPShare;

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying> {
    struct { unsigned char changeType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasShareIdentifier;
@property (retain, nonatomic) CKDPShareIdentifier *shareIdentifier;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasShare;
@property (retain, nonatomic) CKDPShare *share;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)changeTypeAsString:(int)a0;
- (int)StringAsChangeType:(id)a0;

@end
