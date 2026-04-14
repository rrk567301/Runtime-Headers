@class NSArray, NSString, NSDictionary, NSNumber;

@interface MPStoreItemOffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, copy, nonatomic) NSString *formattedPrice;
@property (readonly, copy, nonatomic) NSString *offerType;
@property (readonly, copy, nonatomic) NSNumber *price;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLookupDictionary:(id)a0;
- (id)actionTextForType:(id)a0;

@end
