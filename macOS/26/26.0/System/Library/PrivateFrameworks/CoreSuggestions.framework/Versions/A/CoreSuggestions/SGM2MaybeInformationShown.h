@class NSString;

@interface SGM2MaybeInformationShown : PBCodable <NSCopying> {
    struct { unsigned char extracted : 1; unsigned char extractionModelVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasExtracted;
@property (nonatomic) int extracted;
@property (nonatomic) BOOL hasExtractionModelVersion;
@property (nonatomic) unsigned int extractionModelVersion;

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
- (int)StringAsExtracted:(id)a0;
- (id)extractedAsString:(int)a0;

@end
