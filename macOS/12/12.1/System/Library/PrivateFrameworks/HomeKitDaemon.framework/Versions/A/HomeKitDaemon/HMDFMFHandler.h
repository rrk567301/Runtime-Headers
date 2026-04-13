@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDFMFHandler : HMFObject <HMFLogging>

@property (class, readonly) HMDFMFHandler *sharedHandler;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)queryFMFStatusWithQueue:(id)a0 completion:(id /* block */)a1;

@end
