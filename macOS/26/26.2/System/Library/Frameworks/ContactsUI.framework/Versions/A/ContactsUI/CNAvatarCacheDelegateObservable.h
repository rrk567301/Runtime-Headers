@class NSString, NSMutableArray;
@protocol CNUIPRLikenessProvider;

@interface CNAvatarCacheDelegateObservable : CNObservable <CNAvatarCacheDelegate> {
    NSMutableArray *_observers;
    id<CNUIPRLikenessProvider> _latestLikeness;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)avatarCache:(id)a0 didUpdateLikeness:(id)a1 forContact:(id)a2;

@end
