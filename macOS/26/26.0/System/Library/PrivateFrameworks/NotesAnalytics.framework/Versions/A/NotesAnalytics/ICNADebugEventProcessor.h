@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICNADebugEventProcessor : NSObject <AAEventProcessorType>

@property (copy, nonatomic) NSString *storagePath;
@property (copy, nonatomic) NSDictionary *sessionDataPerSessionID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionsQueue;

- (void)processEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didStartSession:(id)a0;
- (void)didEndSession:(id)a0 endDate:(id)a1;
- (void)didUpdateSession:(id)a0;
- (void)cleanupExistingFiles;
- (void)storeSession:(id)a0;
- (void)storeToLocalFile:(id)a0;

@end
