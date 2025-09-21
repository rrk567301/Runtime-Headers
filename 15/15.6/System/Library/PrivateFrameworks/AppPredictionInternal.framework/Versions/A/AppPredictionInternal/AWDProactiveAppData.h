@class NSString, AWDProactiveAppPredictionSubscores;

@interface AWDProactiveAppData : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char timestamp : 1; unsigned char engagedApp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasEngagedApp;
@property (nonatomic) char engagedApp;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) char hasSubscores;
@property (retain, nonatomic) AWDProactiveAppPredictionSubscores *subscores;
@property (readonly, nonatomic) char hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;

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
