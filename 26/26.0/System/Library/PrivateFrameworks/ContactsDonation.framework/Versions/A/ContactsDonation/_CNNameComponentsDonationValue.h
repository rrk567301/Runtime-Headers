@class NSPersonNameComponents;

@interface _CNNameComponentsDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;

+ (BOOL)supportsSecureCoding;

- (id)initWithNameComponents:(id)a0 origin:(id)a1;
- (void)acceptDonationValueVisitor:(id)a0;
- (id)copyWithNewExpirationDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updatePropertyListRepresentation:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
