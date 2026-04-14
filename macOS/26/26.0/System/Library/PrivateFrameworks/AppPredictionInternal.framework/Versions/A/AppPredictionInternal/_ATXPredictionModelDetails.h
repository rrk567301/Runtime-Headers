@class NSString;

@interface _ATXPredictionModelDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long assetCompatibilityVersion;
@property (readonly, nonatomic) long long assetVersion;
@property (readonly, nonatomic) NSString *abGroup;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetCompatibilityVersion:(long long)a0 assetVersion:(long long)a1 abGroup:(id)a2;

@end
