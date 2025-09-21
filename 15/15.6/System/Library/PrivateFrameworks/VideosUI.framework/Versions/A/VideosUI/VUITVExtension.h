@class NSSet;

@interface VUITVExtension : NSObject

@property (class, readonly, nonatomic) NSSet *tvExtensionBundleIDs;
@property (class, readonly, nonatomic) char isRunningInTVExtension;
@property (class, readonly, nonatomic) char isRunningInTVAppExtension;
@property (class, readonly, nonatomic) char isRunningInTVProductPageExtension;

+ (id)sharedInstance;

@end
