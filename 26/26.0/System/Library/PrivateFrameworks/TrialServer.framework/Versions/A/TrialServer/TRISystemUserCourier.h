@class NSString, _PASXPCClientHelper, NSObject;
@protocol OS_dispatch_queue;

@interface TRISystemUserCourier : NSObject {
    _PASXPCClientHelper *_internalHelper;
    NSObject<OS_dispatch_queue> *_logQueue;
    NSString *_subgroupName;
}

- (id)init;
- (void).cxx_destruct;
- (id)_remoteReadLogEventsWithError:(id *)a0;
- (void)logEventsOnBehalfOfSystem;

@end
