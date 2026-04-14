@class NSArray;

@interface DDBridgeAddMeshRequest : NSObject {
    void /* function */ vertexAttributes;
    void /* function */ vertexLayouts;
}

@property (nonatomic, readonly) int indexCapacity;
@property (nonatomic, readonly) int indexType;
@property (nonatomic, readonly) int vertexBufferCount;
@property (nonatomic, readonly) int vertexCapacity;
@property (nonatomic, readonly) NSArray *vertexAttributes;
@property (nonatomic, readonly) NSArray *vertexLayouts;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIndexCapacity:(int)a0 indexType:(int)a1 vertexBufferCount:(int)a2 vertexCapacity:(int)a3 vertexAttributes:(id)a4 vertexLayouts:(id)a5;

@end
