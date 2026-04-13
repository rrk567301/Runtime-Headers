@class NSString;

@interface _MRDiscoverySessionConfigurationProtobuf : PBCodable <NSCopying> {
    int _features;
    NSString *_outputDeviceUID;
    NSString *_routingContextUID;
    unsigned int _targetSessionID;
    BOOL _alwaysAllowUpdates;
    BOOL _enableThrottling;
    BOOL _populatesExternalDevice;
    struct { unsigned char features : 1; unsigned char targetSessionID : 1; unsigned char alwaysAllowUpdates : 1; unsigned char enableThrottling : 1; unsigned char populatesExternalDevice : 1; } _has;
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
