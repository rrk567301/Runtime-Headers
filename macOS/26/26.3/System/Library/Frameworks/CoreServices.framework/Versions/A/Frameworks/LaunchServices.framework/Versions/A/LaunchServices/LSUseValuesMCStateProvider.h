@class NSString, NSSet, NSNumber;

@interface LSUseValuesMCStateProvider : NSObject <LSMCStateProvider> {
    BOOL _allowlistEnabled;
    NSSet *_allowlistedBundles;
    NSSet *_restrictedBundles;
    NSSet *_ratingRankExceptionBundleIDs;
    NSNumber *_maximumRating;
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
