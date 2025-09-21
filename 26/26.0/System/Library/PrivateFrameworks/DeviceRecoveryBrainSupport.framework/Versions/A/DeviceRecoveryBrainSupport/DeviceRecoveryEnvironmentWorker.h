@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DeviceRecoveryEnvironmentWorker : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) char timerCount;
@property (nonatomic) int entryReason;
@property (retain, nonatomic) NSString *entryDescription;
@property (nonatomic) BOOL isInternalBuild;

+ (id)sharedWorker;

- (id)init;
- (void).cxx_destruct;
- (void)CreateCookieAndCleanup;
- (int)DREEntryReasonEnum;
- (id)DREEntryDescription;
- (id)DREStringFromEntryReason:(int)a0;
- (id)getObjectFromInternalCookie:(id)a0;
- (void)populateDREDescription:(id)a0;
- (void)populateDREReason;
- (void)setupPopulateDREDescription;

@end
