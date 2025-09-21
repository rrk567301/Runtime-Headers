@class STAlarmAction;

@interface STAlarmShowAlarmAndPerformActionRequest : AFSiriRequest {
    STAlarmAction *_action;
}

+ (BOOL)supportsSecureCoding;

- (id)action;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithAction:(id)a0;

@end
