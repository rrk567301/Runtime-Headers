@class NSString, PRAstNode;

@interface PRAstFieldNode : PRAstNode

@property (nonatomic) long long fieldType;
@property (retain, nonatomic) NSString *originalKeyword;
@property (retain, nonatomic) PRAstNode *expression;
@property (nonatomic) BOOL isIgnored;

- (id)toDictionary;
- (void)dealloc;
- (id)fieldTypeString;
- (id)initWithFieldType:(long long)a0 originalKeyword:(id)a1 expression:(id)a2 sourceToken:(id)a3 isLastToken:(BOOL)a4 isIgnored:(BOOL)a5;

@end
