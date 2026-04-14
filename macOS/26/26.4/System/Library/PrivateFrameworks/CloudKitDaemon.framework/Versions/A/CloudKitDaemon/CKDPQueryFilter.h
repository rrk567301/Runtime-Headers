@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue, CKDPLocationBound;

@interface CKDPQueryFilter : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldName;
@property (readonly, nonatomic) BOOL hasFieldValue;
@property (retain, nonatomic) CKDPRecordFieldValue *fieldValue;
@property (readonly, nonatomic) BOOL hasBounds;
@property (retain, nonatomic) CKDPLocationBound *bounds;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)typeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
