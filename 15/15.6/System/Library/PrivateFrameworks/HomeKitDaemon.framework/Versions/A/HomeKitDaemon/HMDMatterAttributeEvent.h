@interface HMDMatterAttributeEvent : HMDMatterAttributeEventBase <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) id eventValue;

+ (id)logCategory;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createPayload;
- (id)dumpState;
- (char)_compareEventValue:(id)a0;
- (char)_evaluateNewValue:(id)a0;
- (void)_handleUpdateRequest:(id)a0;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)analyticsTriggerEventData;
- (id)emptyModelObject;
- (id)initWithModel:(id)a0 home:(id)a1;
- (char)isCompatibleWithEvent:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0;

@end
