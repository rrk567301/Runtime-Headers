@class NSData, HMPBAccessoryReference;

@interface HMPBCommandContainer : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasCommandID;
@property (retain, nonatomic) NSData *commandID;
@property (readonly, nonatomic) char hasEndpointID;
@property (retain, nonatomic) NSData *endpointID;
@property (readonly, nonatomic) char hasClusterID;
@property (retain, nonatomic) NSData *clusterID;
@property (readonly, nonatomic) char hasCommandFields;
@property (retain, nonatomic) NSData *commandFields;
@property (readonly, nonatomic) char hasExpectedValues;
@property (retain, nonatomic) NSData *expectedValues;
@property (readonly, nonatomic) char hasAccessoryReference;
@property (retain, nonatomic) HMPBAccessoryReference *accessoryReference;

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
