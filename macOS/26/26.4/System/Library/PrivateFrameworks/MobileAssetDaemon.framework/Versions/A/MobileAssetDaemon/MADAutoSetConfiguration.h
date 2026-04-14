@class NSString, NSArray, NSURL, NSDate, NSMutableArray, NSError;

@interface MADAutoSetConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *autoAssetSetClientName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSArray *autoAssetEntries;
@property (retain, nonatomic) NSString *discoveredInFlightAtomicInstance;
@property (retain, nonatomic) NSString *newerAtomicInstanceOncePersonalized;
@property (retain, nonatomic) NSString *latestAtomicInstanceToVend;
@property (nonatomic) BOOL latestAtomicInstanceToVendFromPreSUStaging;
@property (retain, nonatomic) NSMutableArray *previouslyVendedLockedAtomicInstances;
@property (nonatomic) long long ticksUntilPreviousForceUnlocked;
@property (retain, nonatomic) NSString *mostRecentlyReceivedCachedAssetSetID;
@property (retain, nonatomic) NSURL *mostRecentlyReceivedDownloadedFromLive;
@property (retain, nonatomic) NSDate *mostRecentlyReceivedLastTimeChecked;
@property (retain, nonatomic) NSDate *mostRecentlyReceivedPostedDate;
@property (retain, nonatomic) NSString *latestToVendCachedAssetSetID;
@property (retain, nonatomic) NSURL *latestToVendDownloadedFromLive;
@property (retain, nonatomic) NSDate *latestToVendLastTimeChecked;
@property (retain, nonatomic) NSDate *latestToVendPostedDate;
@property (retain, nonatomic) NSError *availableForUseError;
@property (retain, nonatomic) NSError *newerVersionError;
@property (nonatomic) BOOL everProvidedLatestToVend;
@property (nonatomic) BOOL inhibitImpliedScheduling;
@property (nonatomic) BOOL haveReceivedLookupResponse;
@property (nonatomic) BOOL vendingAtomicInstanceForConfiguredEntries;
@property (readonly, retain, nonatomic) NSDate *configurationChangedDate;

- (id)persistedEntryID;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)assetSetEntryForAssetType:(id)a0 forAssetSpecifier:(id)a1;
- (id)firstEntryAssetType;
- (id)initForClientDomainName:(id)a0 forSetClientName:(id)a1 forAssetSetIdentifier:(id)a2 withAutoAssetEntries:(id)a3 withDiscoveredInFlightAtomicInstance:(id)a4 withNewerAtomicInstanceOncePersonalized:(id)a5 withLatestAtomicInstanceToVend:(id)a6 withLatestAtomicInstanceToVendFromPreSUStaging:(BOOL)a7 withPreviouslyVendedLockedAtomicInstances:(id)a8 withTicksUntilPreviousForceUnlocked:(long long)a9 withMostRecentlyReceivedCachedAssetSetID:(id)a10 withMostRecentlyReceivedDownloadedFromLive:(id)a11 withMostRecentlyReceivedLastTimeChecked:(id)a12 withMostRecentlyReceivedPostedDate:(id)a13 withLatestToVendCachedAssetSetID:(id)a14 withLatestToVendDownloadedFromLive:(id)a15 withLatestToVendLastTimeChecked:(id)a16 withLatestToVendPostedDate:(id)a17 withAavailableForUseError:(id)a18 withNewerVersionError:(id)a19 havingEverProvidedLatestToVend:(BOOL)a20 inhibitingImpliedScheduling:(BOOL)a21 havingReceivedLookupResponse:(BOOL)a22 vendingAtomicInstanceForConfiguredEntries:(BOOL)a23;
- (BOOL)managesAssetSelector:(id)a0;
- (id)newSummaryWithoutEntryID;
- (id)previouslyVendedLockedSummary;
- (BOOL)refererncesAssetType:(id)a0;

@end
