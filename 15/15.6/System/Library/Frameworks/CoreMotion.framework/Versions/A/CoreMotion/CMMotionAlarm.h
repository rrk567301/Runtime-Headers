@class NSString, CMMotionAlarmManager;

@interface CMMotionAlarm : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long alarmId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) int state;
@property (retain, nonatomic) CMMotionAlarmManager *manager;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int duration;
@property (readonly, nonatomic) char repeats;
@property (readonly, nonatomic) unsigned int type;

- (void)dealloc;
- (id)description;
- (char)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)acknowledgeWithError:(id *)a0;
- (void)copyPropertiesFromAlarm:(id)a0;
- (id)initWithName:(id)a0 type:(unsigned int)a1 duration:(unsigned int)a2 repeats:(char)a3;
- (id)initWithName:(id)a0 type:(unsigned int)a1 duration:(unsigned int)a2 repeats:(char)a3 alarmId:(unsigned long long)a4 bundleId:(id)a5 state:(int)a6;
- (char)unregisterWithError:(id *)a0;

@end
