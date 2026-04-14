@class MIPArtist, MIPMultiverseIdentifier, MIPLibraryPin, MIPAlbum, MIPSeries, MIPPlaylist, MIPGenre, MIPMediaItem;

@interface MSPMediaSyncOperation : PBCodable <NSCopying> {
    struct { unsigned char operationType : 1; } _has;
}

@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) int operationType;
@property (readonly, nonatomic) BOOL hasMultiverseId;
@property (retain, nonatomic) MIPMultiverseIdentifier *multiverseId;
@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) BOOL hasAlbum;
@property (retain, nonatomic) MIPAlbum *album;
@property (readonly, nonatomic) BOOL hasGenre;
@property (retain, nonatomic) MIPGenre *genre;
@property (readonly, nonatomic) BOOL hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (readonly, nonatomic) BOOL hasMediaItem;
@property (retain, nonatomic) MIPMediaItem *mediaItem;
@property (readonly, nonatomic) BOOL hasPlaylist;
@property (retain, nonatomic) MIPPlaylist *playlist;
@property (readonly, nonatomic) BOOL hasLibraryPin;
@property (retain, nonatomic) MIPLibraryPin *libraryPin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsOperationType:(id)a0;
- (id)operationTypeAsString:(int)a0;

@end
