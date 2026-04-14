@class NSArray, NSNumber, NSString;

@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long accountID;
@property (copy) NSArray *bundleIDs;
@property (retain) NSNumber *genreID;
@property long long includeArcade;
@property long long isFirstParty;
@property long long isHidden;
@property long long isIOSBinaryMacOSCompatible;
@property long long currentlyOptedInForMacOSEligibility;
@property long long currentlyOptedInForXROSEligibility;
@property long long optedInForMacOSEligibility;
@property long long optedInForXROSEligibility;
@property long long isEligibleForGamesApp;
@property long long isPreorder;
@property unsigned long long properties;
@property (copy) NSString *searchTerm;
@property (copy) NSArray *sortOptions;
@property long long supportsCurrentDevice;
@property long long supportsRealityDevice;
@property (copy) NSArray *storeIDs;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
