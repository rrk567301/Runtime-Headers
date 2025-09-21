@class NSArray, MTRPluginPBMHeader, MTRPluginPBMDeviceNode, NSMutableArray;

@interface MTRPluginPBMDeviceNodeInvokeBatchCommmandMessage : PBCodable <NSCopying>

@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) NSArray *commands;
@property (readonly, nonatomic) char hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) char hasNode;
@property (retain, nonatomic) MTRPluginPBMDeviceNode *node;
@property (retain, nonatomic) NSMutableArray *commandWithRequiredResponsesValues;

+ (id)_convertArray:(id)a0;
+ (Class)commandWithRequiredResponsesValueType;
+ (id)deviceNodeInvokeBatchCommandMessageFromMessage:(id)a0;
+ (id)deviceNodeInvokeBatchCommandMessageWithNodeID:(id)a0 commands:(id)a1;

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
- (void)addCommandWithRequiredResponsesValue:(id)a0;
- (void)clearCommandWithRequiredResponsesValues;
- (id)commandWithRequiredResponsesValueAtIndex:(unsigned long long)a0;
- (unsigned long long)commandWithRequiredResponsesValuesCount;

@end
