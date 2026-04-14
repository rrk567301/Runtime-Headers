@class NSMutableArray;

@interface _MRRemoveEndpointsMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *endpointUIDs;

+ (Class)endpointUIDsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEndpointUIDs;
- (void)addEndpointUIDs:(id)a0;
- (unsigned long long)endpointUIDsCount;
- (id)endpointUIDsAtIndex:(unsigned long long)a0;

@end
