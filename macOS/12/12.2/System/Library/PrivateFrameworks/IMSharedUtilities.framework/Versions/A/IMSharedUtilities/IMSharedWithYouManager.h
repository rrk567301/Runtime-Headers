@class NSNumber, NSArray;

@interface IMSharedWithYouManager : NSObject

@property (nonatomic) int settingHasChangedNotificationToken;
@property (copy, nonatomic) NSNumber *cachedSharedWithYouEnabledValue;
@property (nonatomic, getter=isSharedWithYouEnabled) BOOL sharedWithYouEnabled;
@property (readonly, nonatomic) BOOL sharedWithYouKeyExists;
@property (readonly, copy, nonatomic) NSArray *sharedWithYouApplicationBundleIDs;

+ (id)sharedManager;
+ (BOOL)_isBundleIDAllowed:(id)a0;
+ (id)defaultAppBundleIDs;
+ (id)tvAppBundleID;
+ (id)sharedWithYouApps;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)__im_ff_isInterstellarEnabled;
- (void)setSharedWithYouEnabled:(BOOL)a0 forApplicationWithBundleID:(id)a1;
- (BOOL)isSharedWithYouEnabledForApplicationWithBundleID:(id)a0;
- (void)setSharedWithYouEnabledForAllApplicationsIndividually:(BOOL)a0;

@end
