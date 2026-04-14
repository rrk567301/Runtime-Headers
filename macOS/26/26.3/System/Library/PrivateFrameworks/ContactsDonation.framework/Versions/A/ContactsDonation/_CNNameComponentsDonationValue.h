@class NSPersonNameComponents;

@interface _CNNameComponentsDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)copyWithNewExpirationDate:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;
- (id)initWithNameComponents:(id)a0 origin:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)updatePropertyListRepresentation:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
