@class NSMutableArray;

@interface NTPBCKConfiguration : PBCodable <NSCopying> {
    struct { unsigned char created : 1; unsigned char expires : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *fields;
@property (nonatomic) char hasCreated;
@property (nonatomic) unsigned long long created;
@property (nonatomic) char hasExpires;
@property (nonatomic) unsigned long long expires;

+ (Class)fieldsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFields:(id)a0;
- (void)clearFields;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldsCount;

@end
