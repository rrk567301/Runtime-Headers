@class NSString;

@interface NTPBScoreProfileDebug : PBCodable <NSCopying> {
    struct { unsigned char audioMultiplier : 1; unsigned char bundleFreeMultiplier : 1; unsigned char bundlePaidMultiplier : 1; unsigned char evergreenMultiplier : 1; unsigned char featuredMultiplier : 1; unsigned char groupingReason : 1; unsigned char listenedPenalty : 1; unsigned char multiplierDampener : 1; unsigned char mutedVoteDampener : 1; unsigned char readPenalty : 1; unsigned char scoringContext : 1; unsigned char scoringType : 1; unsigned char seenPenalty : 1; unsigned char sparseTagsPenalty : 1; unsigned char timeDecayPenalty : 1; unsigned char userConversionScore : 1; } _has;
}

@property (nonatomic) char hasUserConversionScore;
@property (nonatomic) double userConversionScore;
@property (nonatomic) char hasBundlePaidMultiplier;
@property (nonatomic) double bundlePaidMultiplier;
@property (nonatomic) char hasBundleFreeMultiplier;
@property (nonatomic) double bundleFreeMultiplier;
@property (nonatomic) char hasFeaturedMultiplier;
@property (nonatomic) double featuredMultiplier;
@property (nonatomic) char hasAudioMultiplier;
@property (nonatomic) double audioMultiplier;
@property (nonatomic) char hasEvergreenMultiplier;
@property (nonatomic) double evergreenMultiplier;
@property (nonatomic) char hasSeenPenalty;
@property (nonatomic) double seenPenalty;
@property (nonatomic) char hasReadPenalty;
@property (nonatomic) double readPenalty;
@property (nonatomic) char hasSparseTagsPenalty;
@property (nonatomic) double sparseTagsPenalty;
@property (nonatomic) char hasTimeDecayPenalty;
@property (nonatomic) double timeDecayPenalty;
@property (nonatomic) char hasMultiplierDampener;
@property (nonatomic) double multiplierDampener;
@property (nonatomic) char hasMutedVoteDampener;
@property (nonatomic) double mutedVoteDampener;
@property (nonatomic) char hasScoringType;
@property (nonatomic) long long scoringType;
@property (nonatomic) char hasGroupingReason;
@property (nonatomic) long long groupingReason;
@property (nonatomic) char hasScoringContext;
@property (nonatomic) long long scoringContext;
@property (nonatomic) char hasListenedPenalty;
@property (nonatomic) double listenedPenalty;
@property (readonly, nonatomic) char hasScoringAssetsIdentifier;
@property (retain, nonatomic) NSString *scoringAssetsIdentifier;

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
