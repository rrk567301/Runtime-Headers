@class NSString;

@interface AWDProactiveAppPredictionLaunchesAtLocation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char latitude : 1; unsigned char launchReason : 1; unsigned char locationAccuracy : 1; unsigned char longitude : 1; unsigned char timeBucket : 1; unsigned char isClip : 1; unsigned char isNegativeSession : 1; unsigned char isTourist : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasLatitude;
@property (nonatomic) float latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) float longitude;
@property (nonatomic) char hasTimeBucket;
@property (nonatomic) unsigned int timeBucket;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasIsTourist;
@property (nonatomic) char isTourist;
@property (nonatomic) char hasIsClip;
@property (nonatomic) char isClip;
@property (readonly, nonatomic) char hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;
@property (nonatomic) char hasLocationAccuracy;
@property (nonatomic) unsigned int locationAccuracy;
@property (nonatomic) char hasLaunchReason;
@property (nonatomic) int launchReason;
@property (nonatomic) char hasIsNegativeSession;
@property (nonatomic) char isNegativeSession;

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
- (int)StringAsLaunchReason:(id)a0;
- (id)launchReasonAsString:(int)a0;

@end
