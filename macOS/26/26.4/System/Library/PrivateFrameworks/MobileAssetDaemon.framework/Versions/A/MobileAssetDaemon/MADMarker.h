@class NSString, MAAutoAssetSelector, MADAutoSetPolicy;

@interface MADMarker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) MADAutoSetPolicy *setPolicy;
@property (retain, nonatomic) MADAutoSetPolicy *pushedPolicy;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly, nonatomic) BOOL isSetJob;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initForAssetType:(id)a0 forClientDomainName:(id)a1 forAssetSetIdentifier:(id)a2 forAssetSelector:(id)a3 forSetJob:(BOOL)a4 withSetPolicy:(id)a5 withPushedPolicy:(id)a6;

@end
