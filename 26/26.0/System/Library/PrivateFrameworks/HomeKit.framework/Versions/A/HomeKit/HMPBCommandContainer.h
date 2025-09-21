@class NSData, HMPBAccessoryReference;

@interface HMPBCommandContainer : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCommandID;
@property (retain, nonatomic) NSData *commandID;
@property (readonly, nonatomic) BOOL hasEndpointID;
@property (retain, nonatomic) NSData *endpointID;
@property (readonly, nonatomic) BOOL hasClusterID;
@property (retain, nonatomic) NSData *clusterID;
@property (readonly, nonatomic) BOOL hasCommandFields;
@property (retain, nonatomic) NSData *commandFields;
@property (readonly, nonatomic) BOOL hasExpectedValues;
@property (retain, nonatomic) NSData *expectedValues;
@property (readonly, nonatomic) BOOL hasAccessoryReference;
@property (retain, nonatomic) HMPBAccessoryReference *accessoryReference;

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

@end
