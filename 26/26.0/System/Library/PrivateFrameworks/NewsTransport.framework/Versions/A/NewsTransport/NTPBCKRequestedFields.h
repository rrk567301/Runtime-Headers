@class NSMutableArray;

@interface NTPBCKRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;

+ (Class)fieldsType;

- (void)clearFields;
- (void)addFields:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)fieldsCount;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
