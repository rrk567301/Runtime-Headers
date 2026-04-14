@class NSString, HMFUnfairLock;

@interface HMDCloudSyncLogEventDataSyncStateManager : HMFObject <HMDLogEventDataSyncStateContext> {
    HMFUnfairLock *_lock;
}

@property BOOL firstDataSyncEventReceived;
@property (setter=updateWithDataSyncState:) unsigned long long dataSyncState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentContext;

- (id)init;
- (void).cxx_destruct;

@end
