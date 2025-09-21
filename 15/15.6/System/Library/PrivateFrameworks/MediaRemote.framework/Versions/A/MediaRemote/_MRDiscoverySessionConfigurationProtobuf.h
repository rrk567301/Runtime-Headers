@class NSString;

@interface _MRDiscoverySessionConfigurationProtobuf : PBCodable <NSCopying> {
    struct { unsigned char features : 1; unsigned char targetSessionID : 1; unsigned char alwaysAllowUpdates : 1; unsigned char enableThrottling : 1; unsigned char populatesExternalDevice : 1; } _has;
}

@property (nonatomic) char hasFeatures;
@property (nonatomic) int features;
@property (readonly, nonatomic) char hasRoutingContextUID;
@property (retain, nonatomic) NSString *routingContextUID;
@property (nonatomic) char hasEnableThrottling;
@property (nonatomic) char enableThrottling;
@property (nonatomic) char hasAlwaysAllowUpdates;
@property (nonatomic) char alwaysAllowUpdates;
@property (nonatomic) char hasPopulatesExternalDevice;
@property (nonatomic) char populatesExternalDevice;
@property (readonly, nonatomic) char hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (nonatomic) char hasTargetSessionID;
@property (nonatomic) unsigned int targetSessionID;

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
- (int)StringAsFeatures:(id)a0;
- (id)featuresAsString:(int)a0;

@end
