@class NSString, _MRSystemPlaybackCustomDataQueueProtobuf, NSData, _MRSystemPlaybackGenericTracklistQueueProtobuf;

@interface _MRSystemPlaybackQueueProtobuf : PBCodable <NSCopying> {
    struct { unsigned char replaceIntent : 1; unsigned char isRequestingImmediatePlayback : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) char hasReplaceIntent;
@property (nonatomic) int replaceIntent;
@property (nonatomic) char hasIsRequestingImmediatePlayback;
@property (nonatomic) char isRequestingImmediatePlayback;
@property (readonly, nonatomic) char hasFeatureName;
@property (retain, nonatomic) NSString *featureName;
@property (readonly, nonatomic) char hasCustomData;
@property (retain, nonatomic) _MRSystemPlaybackCustomDataQueueProtobuf *customData;
@property (readonly, nonatomic) char hasTracklist;
@property (retain, nonatomic) _MRSystemPlaybackGenericTracklistQueueProtobuf *tracklist;
@property (readonly, nonatomic) char hasUserInfo;
@property (retain, nonatomic) NSData *userInfo;
@property (readonly, nonatomic) char hasMetrics;
@property (retain, nonatomic) NSData *metrics;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsReplaceIntent:(id)a0;
- (id)replaceIntentAsString:(int)a0;

@end
