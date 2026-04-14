@class NSString, NSArray, NSURL, NSDate;

@interface MADAutoSetLookupResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *catalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *catalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *catalogLastTimeChecked;
@property (retain, nonatomic) NSDate *catalogPostedDate;
@property (retain, nonatomic) NSArray *discoveredAtomicEntries;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initForAssetType:(id)a0 withCatalogCachedAssetSetID:(id)a1 withCatalogDownloadedFromLive:(id)a2 withCatalogLastTimeChecked:(id)a3 withCatalogPostedDate:(id)a4 withDiscoveredAtomicEntries:(id)a5;
- (id)newSummaryWithoutEntryID;

@end
