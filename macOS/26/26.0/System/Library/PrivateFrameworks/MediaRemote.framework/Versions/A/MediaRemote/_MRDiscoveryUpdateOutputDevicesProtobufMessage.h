@class _MRDiscoverySessionConfigurationProtobuf, NSMutableArray;

@interface _MRDiscoveryUpdateOutputDevicesProtobufMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) _MRDiscoverySessionConfigurationProtobuf *configuration;

+ (Class)outputDevicesType;

- (void)copyTo:(id)a0;
- (void)addOutputDevices:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)outputDevicesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearOutputDevices;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)outputDevicesCount;
- (void).cxx_destruct;

@end
