@class GEOFormattedString, PBUnknownFields;

@interface GEOGenericSubstitutes : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_substitute;
    int _waypointCategory;
    struct { unsigned char has_waypointCategory : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSubstitute;
@property (retain, nonatomic) GEOFormattedString *substitute;
@property (nonatomic) BOOL hasWaypointCategory;
@property (nonatomic) int waypointCategory;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;
- (int)StringAsWaypointCategory:(id)a0;
- (id)waypointCategoryAsString:(int)a0;

@end
