@class NSString, PBUnknownFields;

@interface GEOMuninBucket : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_bucketURL;
    unsigned int _bucketID;
    unsigned int _lodLevel;
    struct { unsigned char has_bucketID : 1; unsigned char has_lodLevel : 1; } _flags;
}

@property (nonatomic) char hasBucketID;
@property (nonatomic) unsigned int bucketID;
@property (readonly, nonatomic) char hasBucketURL;
@property (retain, nonatomic) NSString *bucketURL;
@property (nonatomic) char hasLodLevel;
@property (nonatomic) unsigned int lodLevel;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
