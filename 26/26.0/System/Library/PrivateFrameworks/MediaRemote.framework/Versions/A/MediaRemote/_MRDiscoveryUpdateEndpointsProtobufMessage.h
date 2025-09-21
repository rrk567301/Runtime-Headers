@class _MRDiscoverySessionConfigurationProtobuf, NSMutableArray;

@interface _MRDiscoveryUpdateEndpointsProtobufMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *endpoints;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) _MRDiscoverySessionConfigurationProtobuf *configuration;

+ (Class)endpointsType;

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
- (void)addEndpoints:(id)a0;
- (void)clearEndpoints;
- (id)endpointsAtIndex:(unsigned long long)a0;
- (unsigned long long)endpointsCount;

@end
