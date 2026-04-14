@class NSString, MAAutoAssetSetStatus;

@interface MAAutoAssetSetInfoFound : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) MAAutoAssetSetStatus *currentSetStatus;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initForAssetSetIdentifier:(id)a0 reportingStatus:(id)a1;

@end
