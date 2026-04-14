@class NSMutableArray;

@interface NTPBCKRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;

+ (Class)fieldsType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFields:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearFields;
- (unsigned long long)fieldsCount;
- (void)writeTo:(id)a0;

@end
