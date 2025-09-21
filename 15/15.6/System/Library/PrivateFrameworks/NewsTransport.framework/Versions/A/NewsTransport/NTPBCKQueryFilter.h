@class NTPBCKRecordFieldValue, NTPBCKRecordFieldIdentifier;

@interface NTPBCKQueryFilter : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) NTPBCKRecordFieldIdentifier *fieldName;
@property (readonly, nonatomic) char hasFieldValue;
@property (retain, nonatomic) NTPBCKRecordFieldValue *fieldValue;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

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
