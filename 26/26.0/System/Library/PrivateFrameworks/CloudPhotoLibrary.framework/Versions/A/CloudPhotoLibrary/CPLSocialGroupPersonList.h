@class NSMutableArray;

@interface CPLSocialGroupPersonList : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *persons;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)personType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)personsCount;
- (void)addPerson:(id)a0;
- (void)clearPersons;
- (id)personAtIndex:(unsigned long long)a0;

@end
