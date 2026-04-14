@interface GEOProactiveWidgetItem : PBCodable <NSCopying> {
    int _timeSinceStart;
    struct { unsigned char has_timeSinceStart : 1; } _flags;
}

@property (nonatomic) BOOL hasTimeSinceStart;
@property (nonatomic) int timeSinceStart;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
