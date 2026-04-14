@class _MRDiscoverySessionConfigurationProtobuf, NSMutableArray;

@interface _MRDiscoveryUpdateOutputDevicesProtobufMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) _MRDiscoverySessionConfigurationProtobuf *configuration;

+ (Class)outputDevicesType;

- (void)clearOutputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDevicesCount;
- (id)dictionaryRepresentation;
- (void)addOutputDevices:(id)a0;
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
