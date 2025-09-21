@class NSString, NSMutableArray, _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRAVEndpointDescriptorProtobuf : PBCodable <NSCopying> {
    struct { unsigned char connectionType : 1; unsigned char canModifyGroupMembership : 1; unsigned char isLocalEndpoint : 1; unsigned char isProxyGroupPlayer : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) char hasDesignatedGroupLeader;
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *designatedGroupLeader;
@property (nonatomic) char hasIsLocalEndpoint;
@property (nonatomic) char isLocalEndpoint;
@property (readonly, nonatomic) char hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) char hasIsProxyGroupPlayer;
@property (nonatomic) char isProxyGroupPlayer;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) char hasCanModifyGroupMembership;
@property (nonatomic) char canModifyGroupMembership;
@property (retain, nonatomic) NSMutableArray *personalOutputDevices;

+ (Class)outputDevicesType;
+ (Class)personalOutputDevicesType;

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
- (int)StringAsConnectionType:(id)a0;
- (id)connectionTypeAsString:(int)a0;
- (void)addOutputDevices:(id)a0;
- (void)addPersonalOutputDevices:(id)a0;
- (void)clearOutputDevices;
- (void)clearPersonalOutputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDevicesCount;
- (id)personalOutputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)personalOutputDevicesCount;

@end
