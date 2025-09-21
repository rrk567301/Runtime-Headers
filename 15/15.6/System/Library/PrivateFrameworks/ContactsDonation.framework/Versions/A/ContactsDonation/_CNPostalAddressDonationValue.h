@class CNPostalAddress, NSString;

@interface _CNPostalAddressDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) NSString *label;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;
- (id)copyWithNewExpirationDate:(id)a0;
- (id)initWithPostalAddress:(id)a0 style:(long long)a1 label:(id)a2 origin:(id)a3;
- (void)updatePropertyListRepresentation:(id)a0;

@end
