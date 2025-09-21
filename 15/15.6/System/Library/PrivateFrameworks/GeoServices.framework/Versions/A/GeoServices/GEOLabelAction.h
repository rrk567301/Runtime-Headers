@class PBUnknownFields;

@interface GEOLabelAction : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _artworkAction;
    int _detailTextAction;
    struct { unsigned char has_artworkAction : 1; unsigned char has_detailTextAction : 1; } _flags;
}

@property (nonatomic) char hasDetailTextAction;
@property (nonatomic) int detailTextAction;
@property (nonatomic) char hasArtworkAction;
@property (nonatomic) int artworkAction;
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
- (int)StringAsDetailTextAction:(id)a0;
- (int)StringAsArtworkAction:(id)a0;
- (id)artworkActionAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)detailTextActionAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
