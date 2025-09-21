@class NSString;

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char multipleBuiltInDevices : 1; } _has;
}

@property (readonly, nonatomic) char hasRoutingContextUID;
@property (retain, nonatomic) NSString *routingContextUID;
@property (nonatomic) char hasMultipleBuiltInDevices;
@property (nonatomic) char multipleBuiltInDevices;

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
