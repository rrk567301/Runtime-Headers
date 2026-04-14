@class NSString, NSMutableArray;

@interface _MRRemoveOutputDevicesMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *outputDeviceUIDs;
@property (readonly, nonatomic) BOOL hasEndpointUID;
@property (retain, nonatomic) NSString *endpointUID;

+ (Class)outputDeviceUIDsType;

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
- (void)addOutputDeviceUIDs:(id)a0;
- (void)clearOutputDeviceUIDs;
- (id)outputDeviceUIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDeviceUIDsCount;

@end
