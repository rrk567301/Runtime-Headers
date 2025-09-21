@interface HMTriggerDeleteAfterExecutionPolicy : HMTriggerDeletePolicy

+ (BOOL)supportsSecureCoding;
+ (id)deleteAfterExecutionPolicy;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(id)a0 payload:(id)a1;

@end
