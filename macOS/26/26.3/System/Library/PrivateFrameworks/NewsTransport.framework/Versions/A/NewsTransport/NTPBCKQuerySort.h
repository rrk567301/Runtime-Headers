@class NTPBCKRecordFieldIdentifier;

@interface NTPBCKQuerySort : PBCodable <NSCopying> {
    struct { unsigned char order : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NTPBCKRecordFieldIdentifier *fieldName;
@property (nonatomic) BOOL hasOrder;
@property (nonatomic) int order;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
