@class NSArray;

@interface STShowAlarmAction : STAlarmAction {
    NSArray *_alarmIds;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)alarmIds;
- (id)_initWithAlarmIds:(id)a0;

@end
