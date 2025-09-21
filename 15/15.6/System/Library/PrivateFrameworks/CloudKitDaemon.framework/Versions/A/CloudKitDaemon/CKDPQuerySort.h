@class CKDPRecordFieldIdentifier, CKDPLocationCoordinate;

@interface CKDPQuerySort : PBCodable <NSCopying> {
    struct { unsigned char order : 1; } _has;
}

@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldName;
@property (nonatomic) char hasOrder;
@property (nonatomic) int order;
@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) CKDPLocationCoordinate *coordinate;

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
- (int)StringAsOrder:(id)a0;
- (id)orderAsString:(int)a0;

@end
