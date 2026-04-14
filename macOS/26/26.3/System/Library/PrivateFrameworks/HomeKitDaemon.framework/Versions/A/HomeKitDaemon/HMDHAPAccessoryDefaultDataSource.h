@class HMDBackgroundTaskManager, NSNotificationCenter, NSDate, HMDHAPMetadata;
@protocol HMDHAPAccessorySwiftDataSource, HMDPreferences;

@interface HMDHAPAccessoryDefaultDataSource : NSObject <HMDHAPAccessoryDataSource>

@property (nonatomic, readonly) id<HMDHAPAccessorySwiftDataSource> swiftDataSource;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) id<HMDPreferences> preferences;
@property (nonatomic, readonly) HMDBackgroundTaskManager *backgroundTaskManager;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) BOOL isResidentCapable;
@property (nonatomic, readonly) HMDHAPMetadata *hapMetadata;

- (id)init;
- (void).cxx_destruct;

@end
