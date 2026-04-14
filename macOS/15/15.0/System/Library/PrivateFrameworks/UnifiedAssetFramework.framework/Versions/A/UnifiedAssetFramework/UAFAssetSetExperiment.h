@class NSUUID, NSString, NSDictionary;

@interface UAFAssetSetExperiment : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *experimentId;
@property (retain, nonatomic) NSDictionary *assetSpecifiers;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 uuid:(id)a1;

@end
