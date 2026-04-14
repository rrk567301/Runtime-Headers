@class DDBridgeMeshDescriptor, NSString, NSArray, NSData, DDBridgeChainedFloat4x4;

@interface DDBridgeUpdateMesh : NSObject {
    void /* function */ identifier;
    void /* function */ parts;
    void /* function */ indexData;
    void /* function */ vertexData;
    void /* function */ materialPrims;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned char updateType;
@property (nonatomic, readonly) DDBridgeMeshDescriptor *descriptor;
@property (nonatomic, readonly) NSArray *parts;
@property (nonatomic, readonly) NSData *indexData;
@property (nonatomic, readonly) NSArray *vertexData;
@property (nonatomic, retain) DDBridgeChainedFloat4x4 *instanceTransforms;
@property (nonatomic, readonly) long long instanceTransformsCount;
@property (nonatomic, readonly) NSArray *materialPrims;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 updateType:(unsigned char)a1 descriptor:(id)a2 parts:(id)a3 indexData:(id)a4 vertexData:(id)a5 instanceTransforms:(id)a6 instanceTransformsCount:(long long)a7 materialPrims:(id)a8;

@end
