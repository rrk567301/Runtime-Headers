@class NSDateFormatter, NSDictionary, NSURL, NSDate, NSString;

@interface CWFAssetCreatorFromRoot : NSObject

@property (retain, nonatomic) NSDateFormatter *formatter;
@property (retain, nonatomic) NSDictionary *infoPlist;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDictionary *rootCatalogInfo;
@property (retain, nonatomic) NSURL *localContentURL;
@property (nonatomic) BOOL availableForUse;
@property (retain, nonatomic) NSString *AssetSpecifier;
@property (retain, nonatomic) NSString *AssetVersion;

- (id)availableForUseAttributes;
- (id)newerVersionAttributes;
- (id)initWithPaths:(id)a0;
- (void).cxx_destruct;
- (id)loadTopLevelInfoPlistFromPaths:(id)a0;

@end
