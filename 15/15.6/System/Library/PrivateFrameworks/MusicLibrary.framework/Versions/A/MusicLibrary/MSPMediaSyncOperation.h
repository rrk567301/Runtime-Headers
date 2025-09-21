@class MIPGenre, MIPSeries, MIPMediaItem, MIPArtist, MIPPlaylist, MIPAlbum, MIPMultiverseIdentifier;

@interface MSPMediaSyncOperation : PBCodable <NSCopying> {
    struct { unsigned char operationType : 1; } _has;
}

@property (nonatomic) char hasOperationType;
@property (nonatomic) int operationType;
@property (readonly, nonatomic) char hasMultiverseId;
@property (retain, nonatomic) MIPMultiverseIdentifier *multiverseId;
@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) char hasAlbum;
@property (retain, nonatomic) MIPAlbum *album;
@property (readonly, nonatomic) char hasGenre;
@property (retain, nonatomic) MIPGenre *genre;
@property (readonly, nonatomic) char hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (readonly, nonatomic) char hasMediaItem;
@property (retain, nonatomic) MIPMediaItem *mediaItem;
@property (readonly, nonatomic) char hasPlaylist;
@property (retain, nonatomic) MIPPlaylist *playlist;

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
- (int)StringAsOperationType:(id)a0;
- (id)operationTypeAsString:(int)a0;

@end
