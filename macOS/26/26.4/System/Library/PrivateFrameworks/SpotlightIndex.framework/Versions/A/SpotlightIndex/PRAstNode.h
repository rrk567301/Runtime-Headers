@class NSString;

@interface PRAstNode : NSObject

@property (retain, nonatomic) NSString *sourceToken;
@property (nonatomic) BOOL isLastToken;

- (id)description;
- (id)toDictionary;
- (void)dealloc;
- (id)initWithSourceToken:(id)a0 isLastToken:(BOOL)a1;

@end
