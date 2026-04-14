@interface GEOTimeToLeaveMapLaunch : PBCodable <NSCopying> {
    double _minutesUntilEvent;
    struct { unsigned char has_minutesUntilEvent : 1; } _flags;
}

@property (nonatomic) BOOL hasMinutesUntilEvent;
@property (nonatomic) double minutesUntilEvent;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;

@end
