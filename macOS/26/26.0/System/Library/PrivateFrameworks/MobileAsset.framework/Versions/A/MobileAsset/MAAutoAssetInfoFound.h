@class MAAutoAssetSelector, NSDictionary, NSURL, MAAutoAssetStatus;

@interface MAAutoAssetInfoFound : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (readonly, retain, nonatomic) NSURL *localContentURL;
@property (readonly, retain, nonatomic) NSDictionary *assetAttributes;
@property (readonly, retain, nonatomic) MAAutoAssetStatus *currentStatus;

- (id)summary;
- (id)initForSelector:(id)a0 withLocalContentURL:(id)a1 withAssetAttributes:(id)a2 reportingStatus:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
