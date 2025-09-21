@class NSString;

@interface PRAstQPFilterNode : PRAstNode

@property (retain, nonatomic) NSString *filterString;

- (void)dealloc;
- (id)toDictionary;
- (id)initWithFilterString:(id)a0 sourceToken:(id)a1 isLastToken:(BOOL)a2;

@end
