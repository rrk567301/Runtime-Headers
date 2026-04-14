@class NSString, PBUnknownFields;

@interface GEOLogMsgStateMuninResource : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_assetBucket;
    unsigned int _levelOfDetail;
    struct { unsigned char has_levelOfDetail : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAssetBucket;
@property (retain, nonatomic) NSString *assetBucket;
@property (nonatomic) BOOL hasLevelOfDetail;
@property (nonatomic) unsigned int levelOfDetail;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end
