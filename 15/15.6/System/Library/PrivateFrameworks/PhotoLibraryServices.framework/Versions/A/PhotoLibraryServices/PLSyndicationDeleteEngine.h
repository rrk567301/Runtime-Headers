@class NSString, NSObject;
@protocol PLSyndicationDeleteEngineDelegate, OS_dispatch_queue;

@interface PLSyndicationDeleteEngine : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    long long _wellKnownPhotoLibraryIdentifier;
}

@property (readonly, weak, nonatomic) id<PLSyndicationDeleteEngineDelegate> delegate;
@property (readonly, nonatomic) NSString *logPrefix;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (char)_deleteConversationWithBundleID:(id)a0 syndicationIdentifiers:(id)a1;
- (char)_deleteSyndicationAssetsWithBundleID:(id)a0 syndicationIdentifiers:(id)a1 deleteCount:(long long *)a2;
- (void)_inqueueProcessDeletesForBundleID:(id)a0 identifiers:(id)a1;
- (char)_processDeletesForBundleID:(id)a0 unprefixedIdentifiers:(id)a1;
- (id)initWithDelegate:(id)a0 path:(id)a1 logPrefix:(id)a2;
- (void)processDeletesForBundleID:(id)a0 identifiers:(id)a1 completion:(id /* block */)a2;

@end
