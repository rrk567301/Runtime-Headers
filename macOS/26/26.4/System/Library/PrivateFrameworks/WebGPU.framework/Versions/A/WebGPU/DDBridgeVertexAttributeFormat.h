@interface DDBridgeVertexAttributeFormat : NSObject

@property (nonatomic, readonly) long long semantic;
@property (nonatomic, readonly) unsigned long long format;
@property (nonatomic, readonly) long long layoutIndex;
@property (nonatomic, readonly) long long offset;

- (id)init;
- (id)initWithSemantic:(long long)a0 format:(unsigned long long)a1 layoutIndex:(long long)a2 offset:(long long)a3;

@end
