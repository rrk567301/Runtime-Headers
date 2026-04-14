@class NSArray;

@interface NSViewAnimationContext : NSObject

@property (retain, nonatomic) NSArray *viewAnimations;
@property (nonatomic) long long animationCount;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
