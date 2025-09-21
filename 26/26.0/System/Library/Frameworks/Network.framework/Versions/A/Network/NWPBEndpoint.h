@class NWPBHostEndpoint, NWPBServiceEndpoint, NWPBInterface, NSData, NWPBAddressEndpoint;

@interface NWPBEndpoint : PBCodable <NSCopying> {
    NWPBAddressEndpoint *_address;
    NWPBHostEndpoint *_host;
    NWPBInterface *_interface;
    NWPBServiceEndpoint *_service;
    NSData *_txtRecord;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
