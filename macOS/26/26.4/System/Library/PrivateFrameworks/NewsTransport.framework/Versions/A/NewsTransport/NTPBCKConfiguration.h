@class NSMutableArray;

@interface NTPBCKConfiguration : PBCodable <NSCopying> {
    struct { unsigned char created : 1; unsigned char expires : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *fields;
@property (nonatomic) BOOL hasCreated;
@property (nonatomic) unsigned long long created;
@property (nonatomic) BOOL hasExpires;
@property (nonatomic) unsigned long long expires;

+ (Class)fieldsType;

- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)addFields:(id)a0;
- (void)clearFields;
- (unsigned long long)fieldsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
