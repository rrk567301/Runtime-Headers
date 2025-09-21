@class EMObjectID;

@interface MUIMessageListOnboardingTipDataSource : MessageListSectionDataSource {
    EMObjectID *_itemIdentifier;
}

@property (nonatomic) long long selectedBucket;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)beginObservingAnimated:(char)a0 nextUpdateNeedsCleanSnapshot:(char)a1;
- (id)initWithConfiguration:(id)a0 bucket:(long long)a1;

@end
