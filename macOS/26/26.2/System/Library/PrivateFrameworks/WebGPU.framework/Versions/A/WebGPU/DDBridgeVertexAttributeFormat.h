@interface DDBridgeVertexAttributeFormat : NSObject

@property (nonatomic, readonly) int semantic;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) int layoutIndex;
@property (nonatomic, readonly) int offset;

- (id)init;
- (id)initWithSemantic:(int)a0 format:(int)a1 layoutIndex:(int)a2 offset:(int)a3;

@end
