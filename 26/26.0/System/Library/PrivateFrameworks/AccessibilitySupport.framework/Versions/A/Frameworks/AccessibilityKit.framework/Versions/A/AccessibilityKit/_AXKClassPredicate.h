@interface _AXKClassPredicate : NSObject

@property (nonatomic) Class controllerClass;
@property (copy, nonatomic) id /* block */ predicate;

- (Class)evaluate:(id)a0;
- (void).cxx_destruct;

@end
