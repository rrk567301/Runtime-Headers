@class NSString;

@interface _MRConfigureConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGroupID;
@property (retain, nonatomic) NSString *groupID;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasSourceOutputDeviceUID;
@property (retain, nonatomic) NSString *sourceOutputDeviceUID;
@property (readonly, nonatomic) BOOL hasSourceOutputDeviceName;
@property (retain, nonatomic) NSString *sourceOutputDeviceName;
@property (readonly, nonatomic) BOOL hasDestinationOutputDeviceUID;
@property (retain, nonatomic) NSString *destinationOutputDeviceUID;

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
