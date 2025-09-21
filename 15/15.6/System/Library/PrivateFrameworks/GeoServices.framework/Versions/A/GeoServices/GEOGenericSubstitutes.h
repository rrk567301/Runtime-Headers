@class GEOFormattedString, PBUnknownFields;

@interface GEOGenericSubstitutes : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_substitute;
    int _waypointCategory;
    struct { unsigned char has_waypointCategory : 1; } _flags;
}

@property (readonly, nonatomic) char hasSubstitute;
@property (retain, nonatomic) GEOFormattedString *substitute;
@property (nonatomic) char hasWaypointCategory;
@property (nonatomic) int waypointCategory;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsWaypointCategory:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)waypointCategoryAsString:(int)a0;

@end
