@class NSString;

@interface PRAstNode : NSObject

@property (retain, nonatomic) NSString *sourceToken;
@property (nonatomic) BOOL isLastToken;

- (void)dealloc;
- (id)description;
- (id)toDictionary;
- (id)initWithSourceToken:(id)a0 isLastToken:(BOOL)a1;

@end
