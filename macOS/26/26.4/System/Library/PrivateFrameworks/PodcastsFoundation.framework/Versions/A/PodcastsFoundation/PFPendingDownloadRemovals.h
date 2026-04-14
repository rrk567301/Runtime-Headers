@interface PFPendingDownloadRemovals : NSObject {
    void /* unknown type, empty encoding */ episodesPendingDeletion;
}

- (void).cxx_destruct;
- (id)init;
- (void)appendEpisodeUUIDsForDeletion:(id)a0;
- (id)initFromUserDefaults:(id)a0;
- (void)writeToUserDefaults:(id)a0;

@end
