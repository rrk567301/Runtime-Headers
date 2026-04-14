@class NSString, MAAutoAssetSetStatus;

@interface MAAutoAssetSetInfoFound : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) MAAutoAssetSetStatus *currentSetStatus;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)summary;
- (id)initForAssetSetIdentifier:(id)a0 reportingStatus:(id)a1;

@end
