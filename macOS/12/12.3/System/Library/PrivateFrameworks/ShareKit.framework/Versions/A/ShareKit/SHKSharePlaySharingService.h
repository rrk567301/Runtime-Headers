@interface SHKSharePlaySharingService : SHKSharingService

+ (BOOL)sharePlayIsAvailable;

- (void)dealloc;
- (id)init;
- (BOOL)isEnabled;
- (void)performWithItems:(id)a0;
- (BOOL)canPerformWithItems:(id)a0;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (id)_createImage;
- (void)startSharePlay:(id)a0;

@end
