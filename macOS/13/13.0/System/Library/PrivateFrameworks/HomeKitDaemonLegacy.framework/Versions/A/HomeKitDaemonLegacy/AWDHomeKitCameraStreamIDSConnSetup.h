@class AWDHomeKitCameraStreamIDSConnSetupParameters;

@interface AWDHomeKitCameraStreamIDSConnSetup : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVideoConnection;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *videoConnection;
@property (readonly, nonatomic) BOOL hasAudioConnection;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *audioConnection;
@property (readonly, nonatomic) BOOL hasKeepaliveConnection;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *keepaliveConnection;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
