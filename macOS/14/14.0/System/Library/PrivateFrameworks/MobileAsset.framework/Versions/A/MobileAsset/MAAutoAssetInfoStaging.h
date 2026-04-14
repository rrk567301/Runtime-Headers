@class NSDictionary;

@interface MAAutoAssetInfoStaging : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSDictionary *allAvailableForStagingAttributes;
@property (readonly, nonatomic) unsigned long long totalExpectedBytes;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithAvailableForStaging:(id)a0 withTotalExpectedBytes:(unsigned long long)a1;

@end
