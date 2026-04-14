@class NSString, NSMutableArray;

@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) BOOL hasEndpointUID;
@property (retain, nonatomic) NSString *endpointUID;
@property (retain, nonatomic) NSMutableArray *clusterAwareOutputDevices;

+ (Class)outputDevicesType;
+ (Class)clusterAwareOutputDevicesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addOutputDevices:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearOutputDevices;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)outputDevicesCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)outputDevicesAtIndex:(unsigned long long)a0;
- (void)addClusterAwareOutputDevices:(id)a0;
- (void)clearClusterAwareOutputDevices;
- (id)clusterAwareOutputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)clusterAwareOutputDevicesCount;

@end
