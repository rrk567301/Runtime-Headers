@class NSMutableArray;

@interface _MRCreateHostedEndpointRequestProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *outputDeviceUIDs;

+ (Class)outputDeviceUIDsType;

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
- (void)addOutputDeviceUIDs:(id)a0;
- (void)clearOutputDeviceUIDs;
- (id)outputDeviceUIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDeviceUIDsCount;

@end
