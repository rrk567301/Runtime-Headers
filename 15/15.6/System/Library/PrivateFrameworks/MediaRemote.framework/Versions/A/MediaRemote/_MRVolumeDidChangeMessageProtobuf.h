@class NSString;

@interface _MRVolumeDidChangeMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char volume : 1; } _has;
}

@property (nonatomic) char hasVolume;
@property (nonatomic) float volume;
@property (readonly, nonatomic) char hasEndpointUID;
@property (retain, nonatomic) NSString *endpointUID;
@property (readonly, nonatomic) char hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;

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
