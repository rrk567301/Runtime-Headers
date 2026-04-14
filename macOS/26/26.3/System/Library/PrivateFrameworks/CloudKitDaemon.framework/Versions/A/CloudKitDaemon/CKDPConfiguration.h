@class NSMutableArray;

@interface CKDPConfiguration : PBCodable <NSCopying> {
    struct { unsigned char created : 1; unsigned char expires : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *fields;
@property (nonatomic) BOOL hasCreated;
@property (nonatomic) unsigned long long created;
@property (nonatomic) BOOL hasExpires;
@property (nonatomic) unsigned long long expires;

+ (Class)fieldsType;

- (void)clearFields;
- (id)dictionaryRepresentation;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldsCount;
- (void)addFields:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
