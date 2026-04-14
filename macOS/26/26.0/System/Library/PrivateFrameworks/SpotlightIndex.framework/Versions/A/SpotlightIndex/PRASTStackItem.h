@class PRAstNode;

@interface PRASTStackItem : NSObject

@property (nonatomic) PRAstNode *node;
@property (nonatomic) BOOL visited;

+ (id)itemWithNode:(id)a0 visited:(BOOL)a1;

- (void)dealloc;

@end
