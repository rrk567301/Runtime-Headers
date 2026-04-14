@class NSMutableArray;

@interface _MRUpdateEndpointsMessageProtobuf : PBCodable <NSCopying> {
    int _endpointFeatures;
    NSMutableArray *_endpoints;
    struct { unsigned char endpointFeatures : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
