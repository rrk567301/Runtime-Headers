@class HMDResidentSyncServer, NSString, HMDResidentSyncClient, HMDHome;

@interface HMDResidentSyncManager : NSObject <HMFLogging, HMDResidentSyncManager> {
    HMDHome *_home;
}

@property (readonly) HMDResidentSyncClient *client;
@property (readonly) HMDResidentSyncServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)stop;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)start;
- (void)performSync;
- (void)performResidentRequest:(id)a0 options:(unsigned long long)a1;
- (id)initWithHome:(id)a0 notificationCenter:(id)a1 persistence:(id)a2 logEventSubmitter:(id)a3;
- (id)initWithHome:(id)a0 notificationCenter:(id)a1 persistence:(id)a2 logEventSubmitter:(id)a3 isResidentCapable:(BOOL)a4 clientDataSource:(id)a5 serverDataSource:(id)a6;
- (void)interceptRemoteResidentRequest:(id)a0 proceed:(id /* block */)a1;
- (void)notifyNewUserOfHomeData:(id)a0;

@end
