@interface PodcastsFoundation.PodcastFeedDownloader : NSObject {
    void /* unknown type, empty encoding */ mediaRequestController;
}

- (id)init;
- (void).cxx_destruct;
- (void)downloadPodcast:(id)a0 allowEpisodesTo404:(BOOL)a1 isImplicitActionRequest:(BOOL)a2 completion:(id /* block */)a3;

@end
