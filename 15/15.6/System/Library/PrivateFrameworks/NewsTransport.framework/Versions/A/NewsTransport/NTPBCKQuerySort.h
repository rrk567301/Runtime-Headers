@class NTPBCKRecordFieldIdentifier;

@interface NTPBCKQuerySort : PBCodable <NSCopying> {
    struct { unsigned char order : 1; } _has;
}

@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) NTPBCKRecordFieldIdentifier *fieldName;
@property (nonatomic) char hasOrder;
@property (nonatomic) int order;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
