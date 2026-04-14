@interface GEOWiFiConnectionSpeedTest : PBCodable <NSCopying> {
    float _avgDL;
    float _avgUL;
    struct { unsigned char has_avgDL : 1; unsigned char has_avgUL : 1; } _flags;
}

@property (nonatomic) BOOL hasAvgUL;
@property (nonatomic) float avgUL;
@property (nonatomic) BOOL hasAvgDL;
@property (nonatomic) float avgDL;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end
