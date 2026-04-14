@class NSArray;

@interface DDBridgeMeshDescriptor : NSObject {
    void /* function */ vertexAttributes;
    void /* function */ vertexLayouts;
}

@property (nonatomic, readonly) long long vertexBufferCount;
@property (nonatomic, readonly) long long vertexCapacity;
@property (nonatomic, readonly) NSArray *vertexAttributes;
@property (nonatomic, readonly) NSArray *vertexLayouts;
@property (nonatomic, readonly) long long indexCapacity;
@property (nonatomic, readonly) unsigned long long indexType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithVertexBufferCount:(long long)a0 vertexCapacity:(long long)a1 vertexAttributes:(id)a2 vertexLayouts:(id)a3 indexCapacity:(long long)a4 indexType:(unsigned long long)a5;

@end
