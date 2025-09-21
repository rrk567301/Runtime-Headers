@class NSString, AWDProactiveAppPredictionSubscores;

@interface AWDProactiveActionData : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char timestamp : 1; unsigned char cacheRank : 1; unsigned char engagedAction : 1; unsigned char futureMedia : 1; unsigned char shown : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasActionKey;
@property (retain, nonatomic) NSString *actionKey;
@property (nonatomic) char hasCacheRank;
@property (nonatomic) int cacheRank;
@property (nonatomic) char hasEngagedAction;
@property (nonatomic) char engagedAction;
@property (nonatomic) char hasFutureMedia;
@property (nonatomic) char futureMedia;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasShown;
@property (nonatomic) char shown;
@property (readonly, nonatomic) char hasSubscores;
@property (retain, nonatomic) AWDProactiveAppPredictionSubscores *subscores;
@property (readonly, nonatomic) char hasHeuristicName;
@property (retain, nonatomic) NSString *heuristicName;
@property (readonly, nonatomic) char hasEngaged;
@property (retain, nonatomic) NSString *engaged;
@property (readonly, nonatomic) char hasSessionId;
@property (retain, nonatomic) NSString *sessionId;

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
