@class NSArray;

@interface COMTAlarmUpdateInterestAction : COMTAction

@property (readonly, copy, nonatomic) NSArray *targetIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetIdentifiers:(id)a0;

@end
