@class MIPGenre, NSString, MIPArtist, MIPSeries;

@interface MIPTVShow : PBCodable <NSCopying> {
    struct { unsigned char seasonNumber : 1; unsigned char videoQuality : 1; } _has;
}

@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) char hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (nonatomic) char hasSeasonNumber;
@property (nonatomic) int seasonNumber;
@property (readonly, nonatomic) char hasEpisodeId;
@property (retain, nonatomic) NSString *episodeId;
@property (readonly, nonatomic) char hasEpisodeSortId;
@property (retain, nonatomic) NSString *episodeSortId;
@property (nonatomic) char hasVideoQuality;
@property (nonatomic) int videoQuality;
@property (readonly, nonatomic) char hasNetworkName;
@property (retain, nonatomic) NSString *networkName;
@property (readonly, nonatomic) char hasGenre;
@property (retain, nonatomic) MIPGenre *genre;

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

@end
