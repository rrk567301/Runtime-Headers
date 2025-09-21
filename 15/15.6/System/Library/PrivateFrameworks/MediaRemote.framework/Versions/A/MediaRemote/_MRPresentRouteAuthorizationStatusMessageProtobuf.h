@class _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRPresentRouteAuthorizationStatusMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) char hasRoute;
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *route;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;

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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;

@end
