@class NSString, NSNumber;

@interface MADEmbeddingSearchResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) NSNumber *distance;
@property (readonly, nonatomic) long long metric;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0 distance:(id)a1 metric:(long long)a2;

@end
