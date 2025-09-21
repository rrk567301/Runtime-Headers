@class NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface SecTapToRadar : NSObject

@property (retain) NSString *alert;
@property (retain) NSString *radarDescription;
@property (retain) NSString *radarnumber;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSDate *created;
@property (retain, nonatomic) NSString *componentID;
@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *componentVersion;
@property (retain, nonatomic) NSString *reason;

+ (char)askUserIfTTR:(id)a0;
+ (void)disableTTRsEntirely;
+ (char)isRateLimited:(id)a0;
+ (id)keyname:(id)a0;
+ (void)triggerTapToRadar:(id)a0;

- (void).cxx_destruct;
- (void)trigger;
- (void)clearRetryTimestamp;
- (id)initTapToRadar:(id)a0 description:(id)a1 radar:(id)a2;
- (char)isRateLimited;
- (void)updateRetryTimestamp;

@end
