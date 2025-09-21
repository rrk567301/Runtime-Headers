@class NSString, MAAutoAssetSelector, NSURL, NSDictionary;

@interface MAAutoAssetSetAtomicEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (retain, nonatomic) NSString *assetID;
@property (retain, nonatomic) NSURL *localContentURL;
@property (retain, nonatomic) NSDictionary *assetAttributes;
@property (nonatomic) BOOL inhibitedFromEmergencyRemoval;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFullAssetSelector:(id)a0 withAssetID:(id)a1 withLocalContentURL:(id)a2 withAssetAttributes:(id)a3 inhibitedFromEmergencyRemoval:(BOOL)a4;

@end
