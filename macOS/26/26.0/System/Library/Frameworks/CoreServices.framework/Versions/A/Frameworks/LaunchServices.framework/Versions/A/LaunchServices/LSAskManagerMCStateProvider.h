@class NSString, LSApplicationRestrictionsManager;

@interface LSAskManagerMCStateProvider : NSObject <LSMCStateProvider> {
    LSApplicationRestrictionsManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)restrictedBundleIDs;
- (id)ratingRankExceptionBundleIDs;
- (BOOL)isAllowlistEnabled;
- (id)allowlistedBundleIDs;
- (id)maximumRating;
- (void).cxx_destruct;

@end
