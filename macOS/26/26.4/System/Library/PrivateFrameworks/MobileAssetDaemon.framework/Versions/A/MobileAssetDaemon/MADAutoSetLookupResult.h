@class NSString, NSArray, NSURL, NSDate, NSDictionary;

@interface MADAutoSetLookupResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *catalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *catalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *catalogLastTimeChecked;
@property (retain, nonatomic) NSDate *catalogPostedDate;
@property (retain, nonatomic) NSArray *requestedAutoAssetEntries;
@property (retain, nonatomic) NSArray *discoveredAtomicEntries;
@property (retain, nonatomic) NSDictionary *autoAssetSetCatalog;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initForAssetType:(id)a0 withCatalogCachedAssetSetID:(id)a1 withCatalogDownloadedFromLive:(id)a2 withCatalogLastTimeChecked:(id)a3 withCatalogPostedDate:(id)a4 withRequestedAutoAssetEntries:(id)a5 withDiscoveredAtomicEntries:(id)a6 withCatalogFromPallasResponse:(id)a7;
- (id)newSummaryWithoutEntryID;

@end
