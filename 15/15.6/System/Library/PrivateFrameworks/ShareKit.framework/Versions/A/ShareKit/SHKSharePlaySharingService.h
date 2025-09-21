@class NSViewController;
@protocol GPGroupActivitySharingControllerHelpers;

@interface SHKSharePlaySharingService : SHKSharingService

@property (retain, nonatomic) NSViewController<GPGroupActivitySharingControllerHelpers> *groupActivitySharingController;

+ (char)sharePlayIsAvailable;

- (id)init;
- (void).cxx_destruct;
- (char)isEnabled;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (char)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (char)needsCustomPresentingWindow;
- (void)startSharePlay:(id)a0 completion:(id /* block */)a1;

@end
