@class NSString, LSApplicationRestrictionsManager;

@interface LSAskManagerMCStateProvider : NSObject <LSMCStateProvider> {
    LSApplicationRestrictionsManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ratingRankExceptionBundleIDs;
- (id)maximumRating;
- (id)allowlistedBundleIDs;
- (void).cxx_destruct;
- (BOOL)isAllowlistEnabled;
- (id)restrictedBundleIDs;

@end
