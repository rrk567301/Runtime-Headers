@class NSString, MAAutoAssetSelector, NSDictionary, NSDate;

@interface MADAutoAssetLookupResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly, retain, nonatomic) NSString *assetAudience;
@property (readonly, retain, nonatomic) NSDictionary *autoAssetCatalog;
@property (readonly, retain, nonatomic) NSDate *recordedTimestamp;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithAssetCatalog:(id)a0 forAssetSelector:(id)a1 forAssetAudience:(id)a2;

@end
