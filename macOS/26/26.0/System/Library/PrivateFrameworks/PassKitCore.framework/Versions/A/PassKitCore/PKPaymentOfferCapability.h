@class NSString, NSSet;

@interface PKPaymentOfferCapability : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fpanIdentifier;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSSet *features;
@property (copy, nonatomic) NSString *merchandisingIdentifier;

- (id)_init;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)associatedPassUniqueID;
- (BOOL)supportsMerchandising;

@end
