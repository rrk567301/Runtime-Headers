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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsChangeType:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)changeTypeAsString:(int)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
