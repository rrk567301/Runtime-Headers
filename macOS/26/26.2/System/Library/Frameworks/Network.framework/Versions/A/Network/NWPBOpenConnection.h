@class NSString, NWPBParameters, NWPBEndpoint;

@interface NWPBOpenConnection : PBCodable <NSCopying> {
    NSString *_clientUUID;
    NWPBEndpoint *_endpoint;
    NWPBParameters *_parameters;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
