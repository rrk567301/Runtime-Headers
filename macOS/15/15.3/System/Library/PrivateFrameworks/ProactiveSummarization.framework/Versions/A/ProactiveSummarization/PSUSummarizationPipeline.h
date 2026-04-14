@class _PSUSummarizationPipeline;

@interface PSUSummarizationPipeline : NSObject {
    _PSUSummarizationPipeline *_pipeline;
}

+ (id)sharedPipelineWithContactStore:(id)a0 incomingBundleId:(id)a1;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (void)handleDeletionOfItemsWithIdentifiers:(id)a0 bundleIdentifier:(id)a1;
- (void)processSearchableItem:(id)a0;

@end
