@class NSString, NSSet;

@interface PKSecureElementPassField : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSSet *foreignReferenceIdentifiers;
@property (nonatomic) long long unitType;

- (void).cxx_destruct;
- (id)initWithPaymentPassFieldDictionary:(id)a0;
- (id)initWithPassField:(id)a0;

@end
