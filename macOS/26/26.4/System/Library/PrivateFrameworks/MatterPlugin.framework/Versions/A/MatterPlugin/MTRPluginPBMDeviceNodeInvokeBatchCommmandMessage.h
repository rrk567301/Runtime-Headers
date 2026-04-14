@class NSArray, MTRPluginPBMHeader, MTRPluginPBMDeviceNode, NSMutableArray;

@interface MTRPluginPBMDeviceNodeInvokeBatchCommmandMessage : PBCodable <NSCopying>

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) NSArray *commands;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) BOOL hasNode;
@property (retain, nonatomic) MTRPluginPBMDeviceNode *node;
@property (retain, nonatomic) NSMutableArray *commandWithRequiredResponsesValues;

+ (id)_convertArray:(id)a0;
+ (Class)commandWithRequiredResponsesValueType;
+ (id)deviceNodeInvokeBatchCommandMessageFromMessage:(id)a0;
+ (id)deviceNodeInvokeBatchCommandMessageWithNodeID:(id)a0 commands:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addCommandWithRequiredResponsesValue:(id)a0;
- (void)clearCommandWithRequiredResponsesValues;
- (id)commandWithRequiredResponsesValueAtIndex:(unsigned long long)a0;
- (unsigned long long)commandWithRequiredResponsesValuesCount;

@end
