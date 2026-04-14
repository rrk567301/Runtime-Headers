@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PowerUIBrightnessController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) BOOL mitigationEngaged;

+ (id)sharedInstance;

- (void)start;
- (id)init;
- (void).cxx_destruct;
- (void)resetMitigation;
- (void)engageMitigation;

@end
