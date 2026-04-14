@class NSArray;

@interface STDeleteAlarmAction : STAlarmAction {
    NSArray *_alarmIds;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)alarmIds;
- (id)_initWithAlarmIds:(id)a0;

@end
