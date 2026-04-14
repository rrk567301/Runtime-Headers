@class NSObject;
@protocol OS_dispatch_queue;

@interface MKClipServices : NSObject {
    NSObject<OS_dispatch_queue> *_requestAppClipMetadataQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_validateAppClipBasedQuickLinks:(id)a0 completion:(id /* block */)a1;
- (void)appClipWithQuickLink:(id)a0 completion:(id /* block */)a1;
- (void)appClipsFromQuickLinks:(id)a0 completion:(id /* block */)a1;
- (void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)a0 completion:(id /* block */)a1;
- (void)requestAppClip:(id)a0 completion:(id /* block */)a1;

@end
