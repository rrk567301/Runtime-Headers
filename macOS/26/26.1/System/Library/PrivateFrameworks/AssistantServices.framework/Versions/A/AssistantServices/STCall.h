@class STContactAddress;

@interface STCall : STSiriModelObject {
    long long _service;
    STContactAddress *_initiatorAddress;
    STContactAddress *_recipientAddress;
}

+ (BOOL)supportsSecureCoding;

- (void)setService:(long long)a0;
- (long long)service;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (id)initiatorAddress;
- (id)recipientAddress;
- (void)setInitiatorAddress:(id)a0;
- (void)setRecipientAddress:(id)a0;

@end
