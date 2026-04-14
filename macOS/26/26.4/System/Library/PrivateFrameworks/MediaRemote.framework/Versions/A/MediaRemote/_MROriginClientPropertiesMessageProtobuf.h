@class NSString;

@interface _MROriginClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char lastPlayingTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasLastPlayingTimestamp;
@property (nonatomic) double lastPlayingTimestamp;
@property (readonly, nonatomic) BOOL hasDevicePlaybackSessionID;
@property (retain, nonatomic) NSString *devicePlaybackSessionID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
