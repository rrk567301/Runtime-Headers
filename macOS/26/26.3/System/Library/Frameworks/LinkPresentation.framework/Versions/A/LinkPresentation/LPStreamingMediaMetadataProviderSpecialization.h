@class LPMediaAssetFetcher, AVAssetImageGenerator, LPLinkMetadata;

@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    LPMediaAssetFetcher *_fetcher;
    AVAssetImageGenerator *_videoImageGenerator;
    LPLinkMetadata *_metadata;
}

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:(id)a0;

- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)done;
- (void)fail;

@end
