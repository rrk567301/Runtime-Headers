@class NSString;

@interface AWDCoreRoutineSettingsMapInteraction : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char deviceClass : 1; unsigned char gestureType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) char hasGestureType;
@property (nonatomic) int gestureType;
@property (nonatomic) char hasDeviceClass;
@property (nonatomic) int deviceClass;

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
