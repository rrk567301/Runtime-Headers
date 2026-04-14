@class NSArray;

@interface PKAliroCompatibilityManifest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *supportedBLEAdvertisingVersions;
@property (readonly, nonatomic) NSArray *supportedBLEUWBProtocolVersions;
@property (readonly, nonatomic) NSArray *supportedExpeditedTransactionProtocolVersions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSupportedBLEAdvertisingVersions:(id)a0 supportedBLEUWBProtocolVersions:(id)a1 supportedExpeditedTransactionProtocolVersions:(id)a2;

@end
