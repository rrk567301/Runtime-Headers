@class NSArray, NSString, NSDictionary, NSNumber;

@interface MPStoreItemOffer : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, copy, nonatomic) NSString *formattedPrice;
@property (readonly, copy, nonatomic) NSString *offerType;
@property (readonly, copy, nonatomic) NSNumber *price;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)actionTextForType:(id)a0;
- (id)initWithLookupDictionary:(id)a0;

@end
