@class MUICategoryMailboxCount, MUICategoryMailboxCountHelper, EMObjectID;

@interface MUIMessageListOnboardingTipDataSource : MessageListSectionDataSource {
    EMObjectID *_itemIdentifier;
}

@property (nonatomic) long long selectedBucket;
@property (retain, nonatomic) MUICategoryMailboxCountHelper *helper;
@property (retain, nonatomic) MUICategoryMailboxCount *count;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)beginObservingAnimated:(BOOL)a0 nextUpdateNeedsCleanSnapshot:(BOOL)a1;
- (id)initWithConfiguration:(id)a0 bucket:(long long)a1 countHelper:(id)a2;

@end
