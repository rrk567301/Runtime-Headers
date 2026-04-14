@interface PXSRowAction : NSObject

@property (copy, nonatomic) id /* block */ handler;

+ (id)action;
+ (id)actionWithHandler:(id /* block */)a0;

- (id)init;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
