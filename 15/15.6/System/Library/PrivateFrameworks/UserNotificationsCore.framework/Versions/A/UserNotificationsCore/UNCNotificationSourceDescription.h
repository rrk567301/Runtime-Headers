@class NSString, NSDictionary, NSURL, NSArray, UNCNotificationSourceSettingsDescription;

@interface UNCNotificationSourceDescription : NSObject <UNCNotificationSourceDescription>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *intentsBundleIdentifier;
@property (copy, nonatomic) NSString *universalApplicationIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *pushEnvironment;
@property (copy, nonatomic) NSString *defaultIconFile;
@property (copy, nonatomic) NSString *subordinateIconFile;
@property (copy, nonatomic) NSString *settingsIconFile;
@property (copy, nonatomic) NSString *settingsSheetIconFile;
@property (copy, nonatomic) NSString *carPlayIconFile;
@property (copy, nonatomic) NSString *watchQuickLookSmallIconFile;
@property (copy, nonatomic) NSString *watchQuickLookLargeIconFile;
@property (copy, nonatomic) NSString *watchListSmallIconFile;
@property (copy, nonatomic) NSString *watchListLargeIconFile;
@property (copy, nonatomic) NSString *watchQuickLook394hIconFile;
@property (copy, nonatomic) NSString *watchQuickLook448hIconFile;
@property (copy, nonatomic) NSString *watchList394hIconFile;
@property (copy, nonatomic) NSString *watchList448hIconFile;
@property (copy, nonatomic) NSString *watchQuickLook430hIconFile;
@property (copy, nonatomic) NSString *watchQuickLook484hIconFile;
@property (copy, nonatomic) NSString *watchList430hIconFile;
@property (copy, nonatomic) NSString *watchList484hIconFile;
@property (copy, nonatomic) NSString *customSettingsBundle;
@property (copy, nonatomic) NSString *customSettingsDetailControllerClass;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSURL *dataContainerURL;
@property (copy, nonatomic) NSDictionary *groupContainerURLS;
@property (copy, nonatomic) NSArray *defaultCategories;
@property (retain, nonatomic) UNCNotificationSourceSettingsDescription *defaultSettings;
@property (copy, nonatomic) NSArray *defaultTopics;
@property (copy, nonatomic) NSArray *activityTypes;
@property (nonatomic) char allowCriticalAlerts;
@property (nonatomic) char allowTimeSensitive;
@property (nonatomic) char allowCalls;
@property (nonatomic) char allowIntercom;
@property (nonatomic) char allowMessages;
@property (nonatomic) char allowPrivateProperties;
@property (nonatomic) char allowUnlimitedContentBody;
@property (nonatomic) char allowAlternateLaunchBundleIdentifiers;
@property (nonatomic) char allowServiceExtensionFiltering;
@property (nonatomic) char hideSettings;
@property (nonatomic) char automaticallyShowSettings;
@property (nonatomic) char suppressDismissalSync;
@property (nonatomic) char suppressIconMask;
@property (nonatomic) char suppressUserAuthorizationPrompt;
@property (nonatomic) char useDefaultDataProvider;
@property (nonatomic) char usesCloudKit;
@property (nonatomic) char requiresTopics;
@property (nonatomic) char supportsContentAvailableRemoteNotifications;
@property (nonatomic, getter=isRestricted) char restricted;
@property (nonatomic) char daemonShouldReceiveBackgroundResponses;
@property (nonatomic) char daemonShouldReceiveNotificationSettingsUpdates;
@property (nonatomic) char daemonShouldReceiveApplicationEvents;
@property (nonatomic) char isAppClip;
@property (nonatomic) char wantsEphemeralNotifications;
@property (nonatomic) char supportsProvisionalAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionWithBundleIdentifier:(id)a0 path:(id)a1 allowServiceExtensionFiltering:(char)a2;

@end
