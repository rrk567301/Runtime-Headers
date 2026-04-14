@interface WFIntentDynamicResolutionRequest : NSObject

@property (copy, nonatomic) id /* block */ resolutionBlock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;

- (void)cancel;
- (void).cxx_destruct;
- (id)init;

@end
