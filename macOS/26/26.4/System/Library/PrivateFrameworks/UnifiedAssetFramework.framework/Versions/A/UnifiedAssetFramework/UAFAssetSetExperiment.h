@class NSUUID, NSString, NSDictionary;

@interface UAFAssetSetExperiment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *experimentId;
@property (retain, nonatomic) NSDictionary *assetSpecifiers;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 uuid:(id)a1;
- (id)initWithExperimentId:(id)a0 assetSpecifiers:(id)a1;

@end
