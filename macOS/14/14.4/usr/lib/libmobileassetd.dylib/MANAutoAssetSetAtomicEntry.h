@class NSString, MAAutoAssetSelector, NSURL, NSDictionary;

@interface MANAutoAssetSetAtomicEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (retain, nonatomic) NSString *assetID;
@property (retain, nonatomic) NSURL *localContentURL;
@property (retain, nonatomic) NSDictionary *assetAttributes;
@property (nonatomic) BOOL inhibitedFromEmergencyRemoval;

- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithFullAssetSelector:(id)a0 withAssetID:(id)a1 withLocalContentURL:(id)a2 withAssetAttributes:(id)a3 inhibitedFromEmergencyRemoval:(BOOL)a4;

@end
