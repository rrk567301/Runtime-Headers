@interface HMDTriggerDeleteAfterExecutionPolicy : HMDTriggerDeletePolicy

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyPolicy:(id)a0;

@end
