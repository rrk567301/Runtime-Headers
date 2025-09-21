@interface WFIntentDynamicResolutionRequest : NSObject

@property (copy, nonatomic) id /* block */ resolutionBlock;
@property (readonly, nonatomic, getter=isCancelled) char cancelled;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;

@end
