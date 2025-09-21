@class NSDictionary, NSString, NSData;

@interface PKServiceProviderOrder : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *serviceProviderData;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *serviceProviderIdentifier;
@property (nonatomic) unsigned long long paymentInstrumentType;
@property (copy, nonatomic) NSData *appletValue;
@property (copy, nonatomic) NSString *transactionIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)_itemDictionary;
- (id)_paymentInstrumentDictionary;

@end
