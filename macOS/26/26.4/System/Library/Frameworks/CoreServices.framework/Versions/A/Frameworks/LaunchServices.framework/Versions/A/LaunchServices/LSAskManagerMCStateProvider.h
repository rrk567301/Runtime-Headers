@class NSString, LSApplicationRestrictionsManager;

@interface LSAskManagerMCStateProvider : NSObject <LSMCStateProvider> {
    LSApplicationRestrictionsManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)ratingRankExceptionBundleIDs;
- (id)allowlistedBundleIDs;
- (id)restrictedBundleIDs;
- (id)maximumRating;
- (BOOL)isAllowlistEnabled;

@end
