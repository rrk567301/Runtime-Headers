@class NSString;

@interface SGM2ContactRejected : PBCodable <NSCopying> {
    struct { unsigned char app : 1; unsigned char extracted : 1; unsigned char extractionModelVersion : 1; unsigned char type : 1; unsigned char uiType : 1; unsigned char selfId : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasApp;
@property (nonatomic) int app;
@property (nonatomic) char hasExtracted;
@property (nonatomic) int extracted;
@property (nonatomic) char hasSelfId;
@property (nonatomic) char selfId;
@property (nonatomic) char hasExtractionModelVersion;
@property (nonatomic) unsigned int extractionModelVersion;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
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
- (int)StringAsApp:(id)a0;
- (id)uiTypeAsString:(int)a0;
- (int)StringAsUiType:(id)a0;
- (int)StringAsExtracted:(id)a0;
- (id)appAsString:(int)a0;
- (id)extractedAsString:(int)a0;

@end
