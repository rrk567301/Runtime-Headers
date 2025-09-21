@class NSString, MIPArtist, MIPSeries;

@interface MIPPodcast : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) char hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (readonly, nonatomic) char hasExternalGuid;
@property (retain, nonatomic) NSString *externalGuid;
@property (readonly, nonatomic) char hasFeedUrl;
@property (retain, nonatomic) NSString *feedUrl;

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
