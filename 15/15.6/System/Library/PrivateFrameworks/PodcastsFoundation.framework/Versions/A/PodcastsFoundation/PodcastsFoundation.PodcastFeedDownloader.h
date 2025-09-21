@interface PodcastsFoundation.PodcastFeedDownloader : NSObject {
    void /* unknown type, empty encoding */ mediaRequestController;
}

- (id)init;
- (void).cxx_destruct;
- (void)downloadPodcast:(id)a0 triggerBy:(id)a1 allowEpisodesTo404:(char)a2 isImplicitActionRequest:(char)a3 completion:(id /* block */)a4;

@end
