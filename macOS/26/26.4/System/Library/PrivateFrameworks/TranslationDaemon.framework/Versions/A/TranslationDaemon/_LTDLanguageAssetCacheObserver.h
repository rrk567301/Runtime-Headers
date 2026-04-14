@class NSUUID;

@interface _LTDLanguageAssetCacheObserver : NSObject

@property (readonly, nonatomic) NSUUID *observerId;
@property (readonly, nonatomic) long long taskHint;
@property (readonly, nonatomic) long long engineType;
@property (readonly, nonatomic) BOOL isIndeterminate;
@property (readonly, nonatomic) id /* block */ observations;
@property (readonly, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) BOOL wantsAIStatusUpdates;

- (void).cxx_destruct;
- (id)initWithID:(id)a0 taskHint:(long long)a1 engineType:(long long)a2 progress:(BOOL)a3 observations:(id /* block */)a4 completion:(id /* block */)a5;

@end
