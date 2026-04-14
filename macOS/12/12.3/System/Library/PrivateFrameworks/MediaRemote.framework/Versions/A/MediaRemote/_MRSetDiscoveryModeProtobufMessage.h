@class _MRDiscoverySessionConfigurationProtobuf;

@interface _MRSetDiscoveryModeProtobufMessage : PBCodable <NSCopying> {
    _MRDiscoverySessionConfigurationProtobuf *_configuration;
    int _features;
    int _mode;
    struct { unsigned char features : 1; unsigned char mode : 1; } _has;
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
