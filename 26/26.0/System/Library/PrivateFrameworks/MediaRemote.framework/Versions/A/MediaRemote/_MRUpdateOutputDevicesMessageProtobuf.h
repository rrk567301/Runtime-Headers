@class NSString, NSMutableArray;

@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) BOOL hasEndpointUID;
@property (retain, nonatomic) NSString *endpointUID;
@property (retain, nonatomic) NSMutableArray *clusterAwareOutputDevices;

+ (Class)outputDevicesType;
+ (Class)clusterAwareOutputDevicesType;

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
- (void)addClusterAwareOutputDevices:(id)a0;
- (void)clearClusterAwareOutputDevices;
- (id)clusterAwareOutputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)clusterAwareOutputDevicesCount;

@end
