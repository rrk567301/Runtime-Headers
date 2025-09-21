@class NWPBParameters, NSString, NWPBInterface, NSMutableArray, NWPBEndpoint;

@interface NWPBPath : PBCodable <NSCopying> {
    NSMutableArray *_agents;
    NSString *_clientUUID;
    NWPBInterface *_delegateInterface;
    NWPBInterface *_directInterface;
    NWPBEndpoint *_endpoint;
    NWPBParameters *_parameters;
    int _status;
    char _direct;
    char _ipv4;
    char _ipv6;
    char _local;
    struct { unsigned char status : 1; unsigned char direct : 1; unsigned char ipv4 : 1; unsigned char ipv6 : 1; unsigned char local : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
