@class NSString;

@interface WBSSharedFeatureAvailability : NSObject

@property (class, nonatomic, setter=setLocalSiriSuggestionsEnabled:) char areLocalSiriSuggestionsEnabled;
@property (class, readonly, nonatomic) char areSiriSearchSuggestionsEnabled;
@property (class, readonly, nonatomic) NSString *safariApplicationPlatformBundleIdentifier;

@end
