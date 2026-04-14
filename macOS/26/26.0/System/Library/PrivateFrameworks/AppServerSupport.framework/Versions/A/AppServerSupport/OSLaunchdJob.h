@class NSUUID, OSLaunchdDomain, NSObject;
@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;

@interface OSLaunchdJob : NSObject {
    NSObject<OS_xpc_object> *_plist;
    OSLaunchdDomain *_domain;
    NSObject<OS_dispatch_source> *_monitor_source;
    id /* block */ _monitor_handler;
    NSObject<OS_dispatch_queue> *_monitor_queue;
}

@property (class, nonatomic) BOOL disableLogging_4watchdogd;

@property (readonly, nonatomic) NSUUID *handle;

+ (id)copyJobsLoadedByCoalition:(unsigned long long)a0 error:(id *)a1;
+ (BOOL)submitAll:(id)a0 error:(id *)a1;
+ (int)_monitorNormalizeError:(int)a0;
+ (id)_createJobFromReplyHandle:(id)a0;
+ (id)_handlesToJobs:(id)a0;
+ (id)jobInfoFromMessage:(id)a0;
+ (long long)jobStateFromMessage:(id)a0;
+ (id)copyJobWithHandle:(id)a0;
+ (id)_submitExtension:(const char *)a0 overlay:(id)a1 domain:(id)a2 error:(id *)a3;
+ (id)copyJobsManagedBy:(id)a0 error:(id *)a1;
+ (id)submitExtension:(id)a0 overlay:(id)a1 domain:(id)a2 error:(id *)a3;
+ (id)copyJobWithLabel:(id)a0 domain:(id)a1;
+ (id)submitExtensionAtURL:(id)a0 properties:(id)a1 domain:(id)a2 error:(id *)a3;
+ (id)copyJobWithPid:(int)a0;

- (BOOL)remove:(id *)a0;
- (id)createInstance:(unsigned char[16])a0 properties:(id)a1 error:(id *)a2;
- (id)_newSubmitRequest;
- (id)submitAndStart:(id *)a0;
- (id)_initWithHandle:(id)a0;
- (void)monitorOnQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_populateHandle:(id)a0;
- (void)_setupMonitorSourceWithPort:(unsigned int)a0 onQueue:(id)a1 withHandler:(id /* block */)a2;
- (id)_newRequest;
- (id)_newCreateInstanceRequest:(unsigned char[16])a0 properties:(id)a1;
- (id)description;
- (id)createInstance:(unsigned char[16])a0 error:(id *)a1;
- (void)setupMonitorOnQueue:(id)a0 withHandler:(id /* block */)a1 reply:(id)a2;
- (id)getCurrentJobInfo;
- (id)initWithPlist:(id)a0 domain:(id)a1;
- (void)cancelMonitor;
- (id)initWithPlist:(id)a0;
- (void)processSubmitReply:(id)a0;
- (BOOL)submit:(id *)a0;
- (id)copyJobsLoadedByJob:(id *)a0;
- (void).cxx_destruct;
- (void)_startMonitoringAfterSubmit:(id)a0;
- (id)start:(id *)a0;

@end
