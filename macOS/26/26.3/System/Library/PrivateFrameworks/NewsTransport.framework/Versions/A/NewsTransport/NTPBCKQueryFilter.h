@class NTPBCKRecordFieldValue, NTPBCKRecordFieldIdentifier;

@interface NTPBCKQueryFilter : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NTPBCKRecordFieldIdentifier *fieldName;
@property (readonly, nonatomic) BOOL hasFieldValue;
@property (retain, nonatomic) NTPBCKRecordFieldValue *fieldValue;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

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
