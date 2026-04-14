@class CNInstantMessageAddress;

@interface CNInstantMessageAddressContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) CNInstantMessageAddress *imAddress;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)cn_triageWithLog:(id)a0 serialNumber:(unsigned long long)a1;
- (id)initWithInstantMessageAddress:(id)a0;

@end
