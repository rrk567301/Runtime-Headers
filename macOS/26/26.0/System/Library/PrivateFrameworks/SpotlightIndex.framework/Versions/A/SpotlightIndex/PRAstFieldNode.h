@class NSString, PRAstNode;

@interface PRAstFieldNode : PRAstNode

@property (nonatomic) long long fieldType;
@property (retain, nonatomic) NSString *originalKeyword;
@property (retain, nonatomic) PRAstNode *expression;

- (void)dealloc;
- (id)toDictionary;
- (id)fieldTypeString;
- (id)initWithFieldType:(long long)a0 originalKeyword:(id)a1 expression:(id)a2 sourceToken:(id)a3 isLastToken:(BOOL)a4;

@end
