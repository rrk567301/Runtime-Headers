@class NSString;
@protocol CMMotionAlarmDelegateProtocol;

@interface CMMotionAlarmManager : NSObject

@property (nonatomic) id<CMMotionAlarmDelegateProtocol> delegate;
@property (readonly, nonatomic) NSString *name;

+ (id)defaultManager;
+ (char)isAvailable;

- (void)dealloc;
- (id)init;
- (id)initWithName:(id)a0;
- (char)acknowledgeAlarmWithName:(id)a0 error:(id *)a1;
- (char)acknowledgeAlarm:(id)a0 error:(id *)a1;
- (char)launchRemoteAppWithError:(id *)a0;
- (char)registerAlarmWithName:(id)a0 type:(unsigned int)a1 duration:(unsigned int)a2 repeats:(char)a3 error:(id *)a4;
- (char)unregisterAlarm:(id)a0 error:(id *)a1;
- (char)unregisterAlarmWithName:(id)a0 error:(id *)a1;

@end
