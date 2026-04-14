@interface NURenderPipelineFilter : NSObject

@property (readonly, nonatomic) id /* block */ filterBlock;

+ (id)stopAtTagFilter:(id)a0;

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
