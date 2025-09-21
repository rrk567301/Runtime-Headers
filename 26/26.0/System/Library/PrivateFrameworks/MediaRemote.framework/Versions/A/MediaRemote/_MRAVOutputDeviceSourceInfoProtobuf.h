@class NSString;

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char multipleBuiltInDevices : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRoutingContextUID;
@property (retain, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL hasMultipleBuiltInDevices;
@property (nonatomic) BOOL multipleBuiltInDevices;

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
