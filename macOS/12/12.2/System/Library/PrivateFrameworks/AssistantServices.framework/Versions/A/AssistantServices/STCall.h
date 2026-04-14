@class STContactAddress;

@interface STCall : STSiriModelObject {
    long long _service;
    STContactAddress *_initiatorAddress;
    STContactAddress *_recipientAddress;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)service;
- (void)setService:(long long)a0;
- (id)initiatorAddress;
- (id)_aceContextObjectValue;
- (void)setInitiatorAddress:(id)a0;
- (id)recipientAddress;
- (void)setRecipientAddress:(id)a0;

@end
