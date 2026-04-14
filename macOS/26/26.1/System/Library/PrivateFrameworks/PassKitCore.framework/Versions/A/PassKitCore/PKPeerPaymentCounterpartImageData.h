@class NSString, NSData;

@interface PKPeerPaymentCounterpartImageData : NSObject <NSSecureCoding, NSCopying, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSData *imageData;

+ (id)recordNamePrefix;
+ (id)counterpartImageDataIdentifierFromRecordName:(id)a0;
+ (id)recordNameForCounterpartImageDataIdentifier:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)itemType;
- (BOOL)isEqual:(id)a0;
- (id)primaryIdentifier;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithAppearanceData:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end
