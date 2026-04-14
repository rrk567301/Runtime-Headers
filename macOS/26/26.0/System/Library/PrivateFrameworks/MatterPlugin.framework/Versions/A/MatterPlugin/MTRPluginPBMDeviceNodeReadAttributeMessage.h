@class MTRPluginPBMHeader, MTRPluginPBMAttributePath, MTRPluginPBMDeviceNode, MTRPluginPBMReadParams;

@interface MTRPluginPBMDeviceNodeReadAttributeMessage : PBCodable <NSCopying>

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) BOOL hasNode;
@property (retain, nonatomic) MTRPluginPBMDeviceNode *node;
@property (readonly, nonatomic) BOOL hasAttributePath;
@property (retain, nonatomic) MTRPluginPBMAttributePath *attributePath;
@property (readonly, nonatomic) BOOL hasReadParams;
@property (retain, nonatomic) MTRPluginPBMReadParams *readParams;

+ (id)deviceNodeReadAttributeMessageFromMessage:(id)a0;
+ (id)deviceNodeReadAttributeMessageWithNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2 attributeID:(id)a3 readParams:(id)a4;

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
