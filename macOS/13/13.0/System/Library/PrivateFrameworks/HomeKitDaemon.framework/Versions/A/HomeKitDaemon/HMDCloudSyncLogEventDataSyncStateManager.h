@class NSString;

@interface HMDCloudSyncLogEventDataSyncStateManager : HMFObject <HMDLogEventDataSyncStateContext> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property BOOL firstDataSyncEventReceived;
@property (setter=updateWithDataSyncState:) unsigned long long dataSyncState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentContext;

- (id)init;

@end
