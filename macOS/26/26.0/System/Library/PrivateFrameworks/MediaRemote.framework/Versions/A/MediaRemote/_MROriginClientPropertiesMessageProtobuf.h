@class NSString;

@interface _MROriginClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char lastPlayingTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasLastPlayingTimestamp;
@property (nonatomic) double lastPlayingTimestamp;
@property (readonly, nonatomic) BOOL hasDevicePlaybackSessionID;
@property (retain, nonatomic) NSString *devicePlaybackSessionID;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
