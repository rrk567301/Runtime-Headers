@class WBSRemotelyUpdatableDataController;

@interface WBSOfflineSearchRemoteDisablementManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

@property (class, readonly, nonatomic) WBSOfflineSearchRemoteDisablementManager *sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)areOfflineSearchSuggestionsDisabled:(id /* block */)a0;

@end
