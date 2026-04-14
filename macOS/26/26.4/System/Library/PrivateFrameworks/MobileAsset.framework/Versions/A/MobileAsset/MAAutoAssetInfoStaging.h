@class NSDictionary;

@interface MAAutoAssetInfoStaging : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSDictionary *updateAttributes;
@property (readonly, retain, nonatomic) NSDictionary *byGroupAvailableForStagingAttributes;
@property (readonly, retain, nonatomic) NSDictionary *byGroupTotalExpectedBytes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)fullDescription:(id)a0 usingLogger:(id)a1;
- (id)initWithUpdateAttributes:(id)a0 withByGroupAvailableForStaging:(id)a1 withByGroupTotalExpectedBytes:(id)a2;

@end
