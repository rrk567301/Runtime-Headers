@class NSString;

@interface PRAstNode : NSObject

@property (retain, nonatomic) NSString *sourceToken;
@property (nonatomic) BOOL isLastToken;

- (id)toDictionary;
- (id)description;
- (void)dealloc;
- (id)initWithSourceToken:(id)a0 isLastToken:(BOOL)a1;

@end
