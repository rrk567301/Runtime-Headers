@class NSArray;

@interface USKXForm : NSObject

@property (readonly, nonatomic) char resetsStack;
@property (readonly, nonatomic) NSArray *operations;

- (void).cxx_destruct;
- (id)initWithOperations:(id)a0 resetsStack:(char)a1;

@end
