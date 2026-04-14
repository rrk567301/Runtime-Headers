@class _MRVolumeControlAvailabilityProtobuf, NSString;

@interface _MRVolumeControlCapabilitiesDidChangeMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCapabilities;
@property (retain, nonatomic) _MRVolumeControlAvailabilityProtobuf *capabilities;
@property (readonly, nonatomic) BOOL hasEndpointUID;
@property (retain, nonatomic) NSString *endpointUID;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
