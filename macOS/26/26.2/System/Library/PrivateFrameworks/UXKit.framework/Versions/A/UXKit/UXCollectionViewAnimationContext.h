@class NSArray;

@interface UXCollectionViewAnimationContext : NSObject

@property (retain, nonatomic) NSArray *viewAnimations;
@property (nonatomic) long long animationCount;
@property (readonly, copy, nonatomic) id completionHandler;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;

@end
