@class NSArray, NSString, NSData;

@interface NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char isExpensive : 1; unsigned char hasIpv6 : 1; unsigned char hasIpv4 : 1; unsigned char isConstrained : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) char isExpensive;
@property (nonatomic) char hasIsExpensive;
@property (copy, nonatomic) NSArray *pathGateways;
@property (copy, nonatomic) NSString *connectionInfo;
@property (nonatomic) char hasConnectionInfo;
@property (nonatomic) char hasIpv6;
@property (nonatomic) char hasHasIpv6;
@property (nonatomic) char hasIpv4;
@property (nonatomic) char hasHasIpv4;
@property (nonatomic) char isConstrained;
@property (nonatomic) char hasIsConstrained;
@property (copy, nonatomic) NSArray *pathInterfaces;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addPathGateways:(id)a0;
- (void)addPathInterfaces:(id)a0;
- (void)clearPathGateways;
- (void)clearPathInterfaces;
- (void)deleteConnectionInfo;
- (void)deleteHasIpv4;
- (void)deleteHasIpv6;
- (void)deleteIsConstrained;
- (void)deleteIsExpensive;
- (void)deletePathGateways;
- (void)deletePathInterfaces;
- (void)deleteStatus;
- (id)pathGatewaysAtIndex:(unsigned long long)a0;
- (unsigned long long)pathGatewaysCount;
- (id)pathInterfacesAtIndex:(unsigned long long)a0;
- (unsigned long long)pathInterfacesCount;
- (id)suppressMessageUnderConditions;

@end
