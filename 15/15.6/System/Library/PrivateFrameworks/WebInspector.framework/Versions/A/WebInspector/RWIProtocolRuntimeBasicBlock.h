@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (nonatomic) int startOffset;
@property (nonatomic) int endOffset;
@property (nonatomic) char hasExecuted;
@property (nonatomic) int executionCount;

- (id)initWithStartOffset:(int)a0 endOffset:(int)a1 hasExecuted:(char)a2 executionCount:(int)a3;

@end
