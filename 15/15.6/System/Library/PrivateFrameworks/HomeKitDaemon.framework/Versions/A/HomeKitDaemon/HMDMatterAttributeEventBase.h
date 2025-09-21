@class NSUUID, HMDMatterPath;

@interface HMDMatterAttributeEventBase : HMDEvent

@property (retain) NSUUID *matterPathUUID;
@property (readonly, nonatomic) HMDMatterPath *matterPath;

+ (char)supportsSecureCoding;
+ (id)logCategory;
+ (id)compareValueOfAttribute:(id)a0 againstValue:(id)a1 operatorType:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isActive;
- (id)createPayload;
- (void)__handleAttributesChangedNotification:(id)a0;
- (char)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (char)_evaluateNewValue:(id)a0;
- (void)_registerForMessages;
- (void)handleAttributesChangedNotification:(id)a0;
- (id)initWithModel:(id)a0 home:(id)a1;
- (char)isCompatibleWithEvent:(id)a0;

@end
