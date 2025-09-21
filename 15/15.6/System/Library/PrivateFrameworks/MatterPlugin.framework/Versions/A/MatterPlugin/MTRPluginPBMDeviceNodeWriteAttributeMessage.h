@class MTRPluginPBMHeader, MTRPluginPBMAttributePath, MTRPluginPBMDeviceNode, MTRPluginPBMVariableValue;

@interface MTRPluginPBMDeviceNodeWriteAttributeMessage : PBCodable <NSCopying> {
    struct { unsigned char expectedValueInterval : 1; unsigned char timedWriteTimeout : 1; } _has;
}

@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) char hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) char hasNode;
@property (retain, nonatomic) MTRPluginPBMDeviceNode *node;
@property (readonly, nonatomic) char hasAttributePath;
@property (retain, nonatomic) MTRPluginPBMAttributePath *attributePath;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) MTRPluginPBMVariableValue *value;
@property (nonatomic) char hasExpectedValueInterval;
@property (nonatomic) unsigned long long expectedValueInterval;
@property (nonatomic) char hasTimedWriteTimeout;
@property (nonatomic) unsigned long long timedWriteTimeout;

+ (id)deviceNodeWriteAttributeMessageFromMessage:(id)a0;
+ (id)deviceNodeWriteAttributeMessageWithNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2 attributeID:(id)a3 value:(id)a4 expectedValueInterval:(id)a5 timedWriteTimeout:(id)a6;

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
