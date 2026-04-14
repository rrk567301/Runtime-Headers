@interface GEOProactiveWidgetItem : PBCodable <NSCopying> {
    int _timeSinceStart;
    struct { unsigned char has_timeSinceStart : 1; } _flags;
}

@property (nonatomic) BOOL hasTimeSinceStart;
@property (nonatomic) int timeSinceStart;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;

@end
