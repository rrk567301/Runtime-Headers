@interface SHKSharePlaySharingService : SHKSharingService

+ (BOOL)sharePlayIsAvailable;

- (void)dealloc;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)canPerformWithItems:(id)a0;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (void)performWithItems:(id)a0;
- (void)startSharePlay:(id)a0 completion:(id /* block */)a1;

@end
