@class NSString, NSMutableArray, _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRAVEndpointDescriptorProtobuf : PBCodable <NSCopying> {
    struct { unsigned char connectionType : 1; unsigned char canModifyGroupMembership : 1; unsigned char isLocalEndpoint : 1; unsigned char isProxyGroupPlayer : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) BOOL hasDesignatedGroupLeader;
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *designatedGroupLeader;
@property (nonatomic) BOOL hasIsLocalEndpoint;
@property (nonatomic) BOOL isLocalEndpoint;
@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) BOOL hasIsProxyGroupPlayer;
@property (nonatomic) BOOL isProxyGroupPlayer;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasCanModifyGroupMembership;
@property (nonatomic) BOOL canModifyGroupMembership;
@property (retain, nonatomic) NSMutableArray *personalOutputDevices;

+ (Class)outputDevicesType;
+ (Class)personalOutputDevicesType;

- (id)connectionTypeAsString:(int)a0;
- (int)StringAsConnectionType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addOutputDevices:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearOutputDevices;
- (id)personalOutputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)personalOutputDevicesCount;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)outputDevicesCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearPersonalOutputDevices;
- (void)mergeFrom:(id)a0;
- (void)addPersonalOutputDevices:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)outputDevicesAtIndex:(unsigned long long)a0;

@end
