@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, OS_os_log, _CDLocalContext;

@interface _OSIAutoLPMManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) BOOL didEnableAutoLPM;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)sharedInstance;

- (void)start;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isPluggedIn;
- (void)disengageAutoLPM;
- (void)engageAutoLPM;
- (void)evaluateAutoLPMDisengagement;
- (void)evaluateAutoLPMEngagement;

@end
