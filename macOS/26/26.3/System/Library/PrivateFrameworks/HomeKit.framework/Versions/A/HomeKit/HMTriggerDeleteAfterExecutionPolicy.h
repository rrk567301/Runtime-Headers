@interface HMTriggerDeleteAfterExecutionPolicy : HMTriggerDeletePolicy

+ (BOOL)supportsSecureCoding;
+ (id)deleteAfterExecutionPolicy;

- (id)description;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPayload:(id)a0 payload:(id)a1;

@end
