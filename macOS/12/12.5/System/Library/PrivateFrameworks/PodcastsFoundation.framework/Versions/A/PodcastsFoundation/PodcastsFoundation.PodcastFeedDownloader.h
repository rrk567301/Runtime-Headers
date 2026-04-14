@interface PodcastsFoundation.PodcastFeedDownloader : NSObject {
    void /* unknown type, empty encoding */ mediaRequestController;
}

- (id)init;
- (void).cxx_destruct;
- (void)downloadPodcast:(id)a0 etag:(id)a1 triggerBy:(id)a2 allowEpisodesTo404:(BOOL)a3 isImplicitActionRequest:(BOOL)a4 completion:(id /* block */)a5;

@end
