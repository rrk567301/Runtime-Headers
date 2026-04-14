@class NSError, NSString, MPCModelPlaybackContext;
@protocol MPMutableIdentifierListSection;

@interface MPCSonicQueueFeeder_Swift : NSObject <MPRequestResponseControllerDelegate> {
    void /* unknown type, empty encoding */ objc;
    void /* unknown type, empty encoding */ _storage;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void)reloadSection:(id<MPMutableIdentifierListSection>)a0 completion:(void (^)(NSError *))a1;
- (id)genericModelObjectForContentID:(id)a0 error:(id *)a1;
- (id)identifiersForContentID:(id)a0;
- (id)initWithQueueFeeder:(id)a0;
- (void)loadWithContext:(MPCModelPlaybackContext *)a0 completion:(void (^)(NSString *, NSError *))a1;
- (BOOL)shouldShuffleExcludeContentID:(id)a0;
- (BOOL)shouldUsePlaceholderForContentID:(id)a0;
- (BOOL)supportsAutoPlayForContentID:(id)a0;

@end
