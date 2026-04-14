@class NSMutableArray;

@interface WBSInjectionStatus : NSObject {
    NSMutableArray *_completionHandlers;
}

@property (readonly, nonatomic) long long injectionStage;

- (void)addCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resolveCompletionHandlers:(id)a0;

@end
