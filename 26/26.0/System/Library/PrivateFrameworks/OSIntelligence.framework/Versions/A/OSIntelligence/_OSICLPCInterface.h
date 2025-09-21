@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface _OSICLPCInterface : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) long long mitigationOption;

+ (id)sharedInstance;
+ (BOOL)hasPerformanceControlService;
+ (BOOL)supportsPerformanceControl;

- (void)start;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)updatePerformanceControlWithMitigation:(id)a0;

@end
