@class NSUUID, NSURL, NSString;

@interface SOAlarm : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *alarmID;
@property (readonly, copy, nonatomic) NSURL *alarmURL;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long hour;
@property (readonly, nonatomic) unsigned long long minute;
@property (readonly, nonatomic) unsigned long long repeatSchedule;
@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) char isFiring;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithAlarmID:(id)a0 alarmURL:(id)a1 title:(id)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 repeatSchedule:(unsigned long long)a5 isEnabled:(char)a6 isFiring:(char)a7;

@end
