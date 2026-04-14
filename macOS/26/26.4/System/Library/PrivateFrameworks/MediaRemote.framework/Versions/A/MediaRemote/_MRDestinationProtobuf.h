@class NSString, _MRAVEndpointDescriptorProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRDestinationProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) BOOL hasEndpoint;
@property (retain, nonatomic) _MRAVEndpointDescriptorProtobuf *endpoint;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (readonly, nonatomic) BOOL hasOutputContextUID;
@property (retain, nonatomic) NSString *outputContextUID;

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
