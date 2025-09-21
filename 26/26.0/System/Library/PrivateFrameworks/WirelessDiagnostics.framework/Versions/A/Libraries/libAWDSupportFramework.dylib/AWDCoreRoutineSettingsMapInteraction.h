@class NSString;

@interface AWDCoreRoutineSettingsMapInteraction : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char deviceClass : 1; unsigned char gestureType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL hasGestureType;
@property (nonatomic) int gestureType;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) int deviceClass;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
