@class NTPBScoreProfile;

@interface NTPBScoreProfiles : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasDefaultScoreProfile;
@property (retain, nonatomic) NTPBScoreProfile *defaultScoreProfile;
@property (readonly, nonatomic) char hasForYouGroupScoreProfile;
@property (retain, nonatomic) NTPBScoreProfile *forYouGroupScoreProfile;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
