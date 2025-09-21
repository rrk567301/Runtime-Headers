@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue, CKDPLocationBound;

@interface CKDPQueryFilter : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldName;
@property (readonly, nonatomic) char hasFieldValue;
@property (retain, nonatomic) CKDPRecordFieldValue *fieldValue;
@property (readonly, nonatomic) char hasBounds;
@property (retain, nonatomic) CKDPLocationBound *bounds;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

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
- (id)typeAsString:(int)a0;

@end
