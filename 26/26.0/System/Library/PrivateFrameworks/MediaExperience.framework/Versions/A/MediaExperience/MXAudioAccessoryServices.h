@class BTAudioRoutingRequest, NSObject;
@protocol OS_dispatch_queue;

@interface MXAudioAccessoryServices : NSObject {
    NSObject<OS_dispatch_queue> *mSerialQueue;
    BTAudioRoutingRequest *mAudioRoutingRequest;
}

+ (id)sharedInstance;
+ (BOOL)isSupported;

- (void)dealloc;
- (id)init;
- (void)finalizeAudioAccessoryConnection;
- (void)handleServerDeath;
- (void)initializeAudioAccessoryConnection;
- (void)requestForSharedRoute:(id)a0 audioScore:(unsigned int)a1 bundleID:(id)a2 startIO:(BOOL)a3 forceHijack:(BOOL)a4;
- (void)sendAudioRoutingRequestToDevice:(id)a0 appBundleID:(id)a1 audioScore:(int)a2 flags:(unsigned int)a3 reason:(id)a4 responseHandler:(id /* block */)a5;
- (void)updateAppState:(id)a0 startIO:(BOOL)a1;

@end
