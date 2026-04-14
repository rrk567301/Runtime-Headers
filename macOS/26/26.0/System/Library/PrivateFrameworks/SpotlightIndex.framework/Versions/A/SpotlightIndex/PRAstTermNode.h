@class NSString;

@interface PRAstTermNode : PRAstNode

@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL isNegated;
@property (nonatomic) BOOL isIgnored;

- (void)dealloc;
- (id)toDictionary;
- (id)initWithValue:(id)a0 sourceToken:(id)a1 isLastToken:(BOOL)a2 isNegated:(BOOL)a3 isIgnored:(BOOL)a4;

@end
