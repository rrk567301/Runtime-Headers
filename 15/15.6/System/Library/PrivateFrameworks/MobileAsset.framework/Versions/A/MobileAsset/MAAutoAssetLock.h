@class MAAutoAssetSelector, NSDictionary, NSURL, NSMutableDictionary;

@interface MAAutoAssetLock : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (readonly, retain, nonatomic) NSURL *localContentURL;
@property (readonly, retain, nonatomic) NSDictionary *assetAttributes;
@property (nonatomic) char inhibitedFromEmergencyRemoval;
@property (retain, nonatomic) NSMutableDictionary *lockReasons;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initForSelector:(id)a0 withLocalContentURL:(id)a1 withAssetAttributes:(id)a2;

@end
