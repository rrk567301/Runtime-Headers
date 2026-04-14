@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface _OSICLPCInterface : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) long long mitigationOption;

+ (id)sharedInstance;
+ (BOOL)hasPerformanceControlService;
+ (BOOL)supportsPerformanceControl;

- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)updatePerformanceControlWithMitigation:(id)a0;

@end
