@class GEOImpressionObjectId;

@interface GEOLogMsgStateImpressionObject : PBCodable <NSCopying> {
    GEOImpressionObjectId *_impressionObjectId;
}

@property (readonly, nonatomic) BOOL hasImpressionObjectId;
@property (retain, nonatomic) GEOImpressionObjectId *impressionObjectId;

+ (BOOL)isValid:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;

@end
