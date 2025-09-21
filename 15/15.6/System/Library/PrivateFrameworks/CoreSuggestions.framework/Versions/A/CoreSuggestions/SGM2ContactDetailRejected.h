@class NSString;

@interface SGM2ContactDetailRejected : PBCodable <NSCopying> {
    struct { unsigned char extracted : 1; unsigned char extractionModelVersion : 1; unsigned char type : 1; unsigned char uiType : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasExtracted;
@property (nonatomic) int extracted;
@property (nonatomic) char hasExtractionModelVersion;
@property (nonatomic) unsigned int extractionModelVersion;
@property (nonatomic) char hasUiType;
@property (nonatomic) int uiType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (id)uiTypeAsString:(int)a0;
- (int)StringAsUiType:(id)a0;
- (int)StringAsExtracted:(id)a0;
- (id)extractedAsString:(int)a0;

@end
