@class NSArray, MTRPluginPBMHeader, MTRPluginPBMDeviceNode, NSMutableArray;

@interface MTRPluginPBMDeviceNodeReadMultipleAttributesMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) NSArray *attributeRequestPaths;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) BOOL hasNode;
@property (retain, nonatomic) MTRPluginPBMDeviceNode *node;
@property (retain, nonatomic) NSMutableArray *attributePaths;

+ (id)_convertArray:(id)a0;
+ (Class)attributePathsType;
+ (id)deviceNodeReadMultipleAttributesMessageFromMessage:(id)a0;
+ (id)deviceNodeReadMultipleAttributesMessageWithNodeID:(id)a0 readAttributePaths:(id)a1;

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
- (void)addAttributePaths:(id)a0;
- (id)attributePathsAtIndex:(unsigned long long)a0;
- (unsigned long long)attributePathsCount;
- (void)clearAttributePaths;

@end
