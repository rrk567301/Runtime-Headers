@class NSString;
@protocol MPCQueueControllerBehaviorMusicDataSourceDelegate;

@interface _MPCNullQueueFeeder : MPQueueFeeder <MPCQueueControllerBehaviorMusicDataSource> {
    NSString *_uniqueIdentifier;
}

@property (class, readonly, nonatomic) char usesIdentifierRegistry;
@property (class, readonly, nonatomic) char restoresIdentifierRegistry;

@property (readonly, nonatomic) char containsLiveStream;
@property (readonly, nonatomic) char containsRadioContent;
@property (weak, nonatomic) id<MPCQueueControllerBehaviorMusicDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (void)loadPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (id)accountIDForItem:(id)a0 inSection:(id)a1;
- (char)containsTransportableContentWithReason:(id *)a0;
- (id)identifiersForItem:(id)a0 inSection:(id)a1;
- (char)isExportableMediaTypeForItem:(id)a0 inSection:(id)a1;
- (unsigned long long)itemCountInSection:(id)a0;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (id)modelPlayEventForItem:(id)a0 inSection:(id)a1;
- (char)section:(id)a0 supportsShuffleType:(long long)a1;
- (char)supportsAutoPlayForItem:(id)a0 inSection:(id)a1;

@end
