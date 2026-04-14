@interface TSPVersionMessageObject : NSObject

@property (readonly, nonatomic) struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } versionMessage;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithVersionMessage:(const void *)a0;

@end
