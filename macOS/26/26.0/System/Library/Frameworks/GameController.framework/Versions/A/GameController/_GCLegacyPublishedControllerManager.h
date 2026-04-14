@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _GCLegacyPublishedControllerManager : NSObject <GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
}

@property (readonly, copy) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)activateWithSession:(id)a0 environment:(id)a1 options:(unsigned long long)a2;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;
- (id)invalidateWithSession:(id)a0 environment:(id)a1;

@end
