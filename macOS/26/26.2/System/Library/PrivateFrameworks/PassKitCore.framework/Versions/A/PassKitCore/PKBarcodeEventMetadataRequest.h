@class NSString;

@interface PKBarcodeEventMetadataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceAccountIdentifier;
@property (copy, nonatomic) NSString *lastUsedBarcodeIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBarcodeIdentifier:(id)a0 deviceAccountIdentifier:(id)a1;

@end
