@class NSArray, NSString;

@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long accountID;
@property (copy) NSArray *bundleIDs;
@property long long includeArcade;
@property long long isFirstParty;
@property long long isHidden;
@property long long isIOSBinaryMacOSCompatible;
@property long long currentlyOptedInForMacOSEligibility;
@property long long currentlyOptedInForXROSEligibility;
@property long long optedInForMacOSEligibility;
@property long long optedInForXROSEligibility;
@property long long isPreorder;
@property (copy) NSString *searchTerm;
@property (copy) NSArray *sortOptions;
@property long long supportsRealityDevice;
@property (copy) NSArray *storeIDs;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
