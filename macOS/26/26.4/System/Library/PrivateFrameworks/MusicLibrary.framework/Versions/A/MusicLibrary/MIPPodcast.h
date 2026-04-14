@class NSString, MIPArtist, MIPSeries;

@interface MIPPodcast : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) BOOL hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (readonly, nonatomic) BOOL hasExternalGuid;
@property (retain, nonatomic) NSString *externalGuid;
@property (readonly, nonatomic) BOOL hasFeedUrl;
@property (retain, nonatomic) NSString *feedUrl;

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

@end
