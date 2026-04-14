@class NSMutableDictionary, VCRateSharingGroup;

@interface VCRateControllerManager : VCObject {
    VCRateSharingGroup *_defaultSharingGroup;
    NSMutableDictionary *_sharingGroupDict;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _sharingGroupMutex;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)prepareCallIDKeyFromConnection:(id)a0;
- (void)cleanupRateControllerSharingGroupWithConnection:(id)a0 usePolicy:(unsigned int)a1;
- (id)getRateControllerSharingGroupWithConnection:(id)a0 usePolicy:(unsigned int)a1;
- (id)prepareEndPointKeyFromConnection:(id)a0;

@end
