@class NSMutableArray;

@interface NTPBCKRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;

+ (Class)fieldsType;

- (void)addFields:(id)a0;
- (void)clearFields;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)fieldsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
