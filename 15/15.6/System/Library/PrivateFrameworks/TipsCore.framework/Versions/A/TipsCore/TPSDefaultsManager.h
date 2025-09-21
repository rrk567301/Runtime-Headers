@class NSString, NSArray, NSDate, NSNumber;

@interface TPSDefaultsManager : NSObject

@property (class, nonatomic, readonly) long long crunchingIntervalInDays;
@property (class, nonatomic, readonly) long long triggerMinObservationCount;
@property (class, nonatomic, readonly) char debugActiveIAPs;
@property (class, nonatomic, readonly) char displayAllFeaturedTopics;
@property (class, nonatomic, readonly) char ignoreCloud;
@property (class, nonatomic, readonly) char ignoreTargetingValidator;
@property (class, nonatomic) char isInternalDevice;
@property (class, nonatomic, readonly) char resetDaemonData;
@property (class, nonatomic, readonly) char resetDataCache;
@property (class, nonatomic, readonly) char showAllCollections;
@property (class, nonatomic, readonly) char showCollectionIntro;
@property (class, nonatomic, readonly) char showPagingLabelOnLongPress;
@property (class, nonatomic, readonly) char suppressNotifications;
@property (class, nonatomic, readonly) NSString *assetRequestHostURL;
@property (class, nonatomic, readonly) NSString *assetRatioIdentifier;
@property (class, nonatomic, readonly) NSString *assetURL;
@property (class, nonatomic, readonly) NSString *deviceModel;
@property (class, nonatomic, readonly) NSString *featuredCollection;
@property (class, nonatomic, readonly) NSString *notificationDocument;
@property (class, nonatomic, readonly) NSString *platform;
@property (class, nonatomic, readonly) NSString *requestHostURL;
@property (class, nonatomic, readonly) NSString *requestLanguage;
@property (class, nonatomic, readonly) NSString *requestModel;
@property (class, nonatomic, readonly) NSString *requestPlatform;
@property (class, nonatomic, readonly) NSString *releaseType;
@property (class, nonatomic, readonly) NSString *requestURL;
@property (class, nonatomic, readonly) NSString *requestVersion;
@property (class, nonatomic, readonly) NSString *widgetDocument;
@property (class, nonatomic, readonly) NSNumber *contentUpdatedDarwinNotificationInSeconds;
@property (class, nonatomic, readonly) NSNumber *contextualEventDaysSinceLastMajorUpdateInSeconds;
@property (class, nonatomic, readonly) NSNumber *holdoutGroup;
@property (class, nonatomic, readonly) NSNumber *requestInterval;
@property (class, nonatomic, readonly) NSNumber *standardNotificationInterval;
@property (class, nonatomic, readonly) NSNumber *userType;
@property (class, nonatomic, readonly) double contextualEventLookBackDaysInSeconds;
@property (class, nonatomic, readonly) double featuredDocumentInterval;
@property (class, nonatomic, readonly) double welcomeNotificationDelay;
@property (class, nonatomic, readonly) double welcomeNotificationGracePeriod;
@property (class, nonatomic, readonly) double sessionTimeoutIntervalInSeconds;
@property (class, nonatomic, readonly) NSDate *lastMajorVersionUpdateDate;
@property (class, nonatomic, readonly) NSArray *matchedClientConditions;
@property (class, nonatomic, readonly) NSArray *matchedClientConditionTargeting;

- (id)init;

@end
