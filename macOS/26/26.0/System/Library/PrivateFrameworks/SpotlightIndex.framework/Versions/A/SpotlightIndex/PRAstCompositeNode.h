@class NSString, NSMutableArray;

@interface PRAstCompositeNode : PRAstNode

@property (retain, nonatomic) NSString *nodeType;
@property (retain, nonatomic) NSMutableArray *children;

- (void)dealloc;
- (id)description;
- (id)toDictionary;
- (void)addChild:(id)a0;
- (id)initWithNodeType:(id)a0 children:(id)a1 sourceToken:(id)a2 isLastToken:(BOOL)a3;

@end
