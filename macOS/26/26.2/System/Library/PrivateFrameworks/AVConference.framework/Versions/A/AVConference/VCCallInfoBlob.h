@class NSString;

@interface VCCallInfoBlob : PBCodable <NSCopying>

@property (nonatomic) unsigned int callID;
@property (nonatomic) unsigned int clientVersion;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *frameworkVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasAudioDeviceUID;
@property (retain, nonatomic) NSString *audioDeviceUID;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)stringForCheckpoint;

@end
