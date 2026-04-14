@class HDProfile;

@interface HDCloudSyncContextSyncManager : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (id)push:(id /* block */)a0;
- (void).cxx_destruct;
- (id)pull:(id /* block */)a0;

@end
