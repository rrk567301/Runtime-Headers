@protocol BDSServiceProtocol;

@interface BDSReadingGoalsServiceClient : NSObject

@property (readonly, nonatomic) id<BDSServiceProtocol> serviceProxy;
@property (copy, nonatomic) id /* block */ onRemoteChange;

+ (id)sharedServiceProxy;
+ (void)clearLocalCachedDataWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleOnRemoteChange:(id)a0;
- (void)changeBooksFinishedGoalTo:(long long)a0 completionHandler:(id /* block */)a1;
- (void)changeDailyGoalTo:(double)a0 completionHandler:(id /* block */)a1;
- (void)clearDataWithCompletionHandler:(id /* block */)a0;
- (void)stateInfoWithCompletionHandler:(id /* block */)a0;

@end
