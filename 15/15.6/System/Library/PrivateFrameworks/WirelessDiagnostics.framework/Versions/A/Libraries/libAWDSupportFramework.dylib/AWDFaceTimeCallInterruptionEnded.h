@class NSString;

@interface AWDFaceTimeCallInterruptionEnded : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char interruptionDuration : 1; unsigned char isAudioResumed : 1; unsigned char isVideo : 1; unsigned char isVideoResumed : 1; unsigned char linkQuality : 1; unsigned char onLockScreen : 1; } _has;
}

@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasInterruptionDuration;
@property (nonatomic) unsigned int interruptionDuration;
@property (nonatomic) char hasIsVideoResumed;
@property (nonatomic) unsigned int isVideoResumed;
@property (nonatomic) char hasIsAudioResumed;
@property (nonatomic) unsigned int isAudioResumed;
@property (nonatomic) char hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) char hasIsVideo;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) char hasOnLockScreen;
@property (nonatomic) unsigned int onLockScreen;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
