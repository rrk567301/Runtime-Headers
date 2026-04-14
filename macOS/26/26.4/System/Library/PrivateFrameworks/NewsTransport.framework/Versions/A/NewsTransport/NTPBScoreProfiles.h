@class NTPBScoreProfile;

@interface NTPBScoreProfiles : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDefaultScoreProfile;
@property (retain, nonatomic) NTPBScoreProfile *defaultScoreProfile;
@property (readonly, nonatomic) BOOL hasForYouGroupScoreProfile;
@property (retain, nonatomic) NTPBScoreProfile *forYouGroupScoreProfile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
