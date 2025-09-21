@class NSArray;

@interface COMTUpdateInterestAction : COMTTypedAction

@property (readonly, copy, nonatomic) NSArray *targetIdentifiers;

+ (char)supportsSecureCoding;
+ (id)actionWithTargetType:(id)a0 targetIdentifiers:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetType:(id)a0 targetIdentifiers:(id)a1;

@end
