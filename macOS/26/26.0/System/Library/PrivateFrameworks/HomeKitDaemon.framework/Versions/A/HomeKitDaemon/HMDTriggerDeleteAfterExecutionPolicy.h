@interface HMDTriggerDeleteAfterExecutionPolicy : HMDTriggerDeletePolicy

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)applyPolicy:(id)a0;

@end
