@class NSString, MAAutoAssetSelector, NSURL, NSDictionary;

@interface MAAutoAssetSetAtomicEntry : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (readonly, retain, nonatomic) NSString *assetID;
@property (readonly, retain, nonatomic) NSURL *localContentURL;
@property (readonly, retain, nonatomic) NSDictionary *assetAttributes;
@property (nonatomic) char inhibitedFromEmergencyRemoval;

- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithFullAssetSelector:(id)a0 withAssetID:(id)a1 withLocalContentURL:(id)a2 withAssetAttributes:(id)a3 inhibitedFromEmergencyRemoval:(char)a4;

@end
