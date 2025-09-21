@class NSString;

@interface _MROriginClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char lastPlayingTimestamp : 1; } _has;
}

@property (nonatomic) char hasLastPlayingTimestamp;
@property (nonatomic) double lastPlayingTimestamp;
@property (readonly, nonatomic) char hasDevicePlaybackSessionID;
@property (retain, nonatomic) NSString *devicePlaybackSessionID;

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

@end
