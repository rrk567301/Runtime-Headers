@class NSString, NSArray;

@interface MAAutoAssetSetAssetOriginReport : NSObject

@property (retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSString *originAtomicInstance;
@property (retain, nonatomic) NSArray *assetOriginEntries;

- (id)description;
- (id)summary;
- (void).cxx_destruct;
- (id)initWithClientDomainName:(id)a0 withAssetSetIdentifier:(id)a1 withOriginAtomicInstance:(id)a2 withAssetOriginEntries:(id)a3;

@end
