@class NSString;

@interface AWDFaceTimeCallAcceptSent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char errorCode : 1; unsigned char isVideo : 1; unsigned char onLockScreen : 1; unsigned char sendDuration : 1; } _has;
}

@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasSendDuration;
@property (nonatomic) unsigned int sendDuration;
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
