@interface HMDTriggerDeleteAfterExecutionPolicy : HMDTriggerDeletePolicy

+ (char)supportsSecureCoding;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyPolicy:(id)a0;

@end
