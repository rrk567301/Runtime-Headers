@interface AWDSymptomsNetworkAnalyticsScoring : PBCodable <NSCopying> {
    struct { unsigned char lifetimeOldestItemSecs : 1; unsigned char numberEntriesWithHomeLOI : 1; unsigned char numberEntriesWithUnapprovedLOI : 1; unsigned char numberEntriesWithUndefinedLOI : 1; unsigned char numberEntriesWithWorkLOI : 1; unsigned char scoredEntries : 1; unsigned char scoredKnownGood : 1; unsigned char timeSinceLastScoringSecs : 1; unsigned char timestamp : 1; unsigned char networkType : 1; unsigned char scoringCompletionCode : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) char hasTimeSinceLastScoringSecs;
@property (nonatomic) unsigned long long timeSinceLastScoringSecs;
@property (nonatomic) char hasScoringCompletionCode;
@property (nonatomic) int scoringCompletionCode;
@property (nonatomic) char hasScoredEntries;
@property (nonatomic) unsigned long long scoredEntries;
@property (nonatomic) char hasScoredKnownGood;
@property (nonatomic) unsigned long long scoredKnownGood;
@property (nonatomic) char hasLifetimeOldestItemSecs;
@property (nonatomic) unsigned long long lifetimeOldestItemSecs;
@property (nonatomic) char hasNumberEntriesWithHomeLOI;
@property (nonatomic) unsigned long long numberEntriesWithHomeLOI;
@property (nonatomic) char hasNumberEntriesWithWorkLOI;
@property (nonatomic) unsigned long long numberEntriesWithWorkLOI;
@property (nonatomic) char hasNumberEntriesWithUndefinedLOI;
@property (nonatomic) unsigned long long numberEntriesWithUndefinedLOI;
@property (nonatomic) char hasNumberEntriesWithUnapprovedLOI;
@property (nonatomic) unsigned long long numberEntriesWithUnapprovedLOI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (int)StringAsScoringCompletionCode:(id)a0;
- (id)scoringCompletionCodeAsString:(int)a0;

@end
