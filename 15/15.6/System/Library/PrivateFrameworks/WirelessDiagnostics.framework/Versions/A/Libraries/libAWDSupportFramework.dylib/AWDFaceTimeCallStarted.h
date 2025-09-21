@class NSString;

@interface AWDFaceTimeCallStarted : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char isCallUpgrade : 1; unsigned char isToEmail : 1; unsigned char isToPhoneNumber : 1; unsigned char isVideo : 1; unsigned char onLockScreen : 1; } _has;
}

@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasIsToPhoneNumber;
@property (nonatomic) unsigned int isToPhoneNumber;
@property (nonatomic) char hasIsToEmail;
@property (nonatomic) unsigned int isToEmail;
@property (nonatomic) char hasIsCallUpgrade;
@property (nonatomic) unsigned int isCallUpgrade;
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
