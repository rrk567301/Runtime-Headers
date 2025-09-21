@class PBUnknownFields;

@interface GEOLabelAction : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _artworkAction;
    int _detailTextAction;
    struct { unsigned char has_artworkAction : 1; unsigned char has_detailTextAction : 1; } _flags;
}

@property (nonatomic) BOOL hasDetailTextAction;
@property (nonatomic) int detailTextAction;
@property (nonatomic) BOOL hasArtworkAction;
@property (nonatomic) int artworkAction;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsArtworkAction:(id)a0;
- (int)StringAsDetailTextAction:(id)a0;
- (id)artworkActionAsString:(int)a0;
- (id)detailTextActionAsString:(int)a0;

@end
