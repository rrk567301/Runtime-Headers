@class NSString;

@interface _MRConfigureConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasGroupID;
@property (retain, nonatomic) NSString *groupID;
@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char hasSourceOutputDeviceUID;
@property (retain, nonatomic) NSString *sourceOutputDeviceUID;
@property (readonly, nonatomic) char hasSourceOutputDeviceName;
@property (retain, nonatomic) NSString *sourceOutputDeviceName;
@property (readonly, nonatomic) char hasDestinationOutputDeviceUID;
@property (retain, nonatomic) NSString *destinationOutputDeviceUID;

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
