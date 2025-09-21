@class BRCThrottler, NSString, NSObject, BRDSIDString;
@protocol OS_dispatch_queue;

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate> {
    BRDSIDString *_dsid;
    NSObject<OS_dispatch_queue> *_queue;
    BRCThrottler *_throttler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)addPerformer:(id)a0;
+ (void)removePerformer:(id)a0;

- (void).cxx_destruct;
- (void)perform;
- (void)_close;
- (id)_key;
- (void)networkReachabilityChanged:(char)a0;
- (id)initWithDSID:(id)a0;
- (void)resumeAndAutoClose;

@end
