@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SecTapToRadar : NSObject

@property (retain) NSString *alert;
@property (retain) NSString *radarDescription;
@property (retain) NSString *radarnumber;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSString *componentID;
@property (retain) NSString *componentName;
@property (retain) NSString *componentVersion;

+ (id)keyname:(id)a0;
+ (BOOL)isRateLimited:(id)a0;
+ (void)disableTTRsEntirely;
+ (void)triggerTapToRadar:(id)a0;
+ (BOOL)askUserIfTTR:(id)a0;

- (void).cxx_destruct;
- (id)initTapToRadar:(id)a0 description:(id)a1 radar:(id)a2;
- (BOOL)isRateLimited;
- (void)updateRetryTimestamp;
- (void)clearRetryTimestamp;
- (void)trigger;

@end
