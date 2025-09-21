@class NSUUID;

@interface _LTDLanguageAssetCacheObserver : NSObject

@property (readonly, nonatomic) NSUUID *observerId;
@property (readonly, nonatomic) long long taskHint;
@property (readonly, nonatomic) BOOL isIndeterminate;
@property (readonly, nonatomic) id /* block */ observations;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithID:(id)a0 taskHint:(long long)a1 progress:(BOOL)a2 observations:(id /* block */)a3 completion:(id /* block */)a4;

@end
