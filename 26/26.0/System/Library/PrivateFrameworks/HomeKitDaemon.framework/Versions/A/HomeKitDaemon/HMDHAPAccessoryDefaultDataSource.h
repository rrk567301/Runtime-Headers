@class HMDBackgroundTaskManager, HMFPreferences, NSNotificationCenter, NSDate, HMDHAPMetadata;
@protocol HMDHAPAccessorySwiftDataSource;

@interface HMDHAPAccessoryDefaultDataSource : NSObject <HMDHAPAccessoryDataSource>

@property (nonatomic, readonly) id<HMDHAPAccessorySwiftDataSource> swiftDataSource;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) HMFPreferences *preferences;
@property (nonatomic, readonly) HMDBackgroundTaskManager *backgroundTaskManager;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) BOOL isResidentCapable;
@property (nonatomic, readonly) HMDHAPMetadata *hapMetadata;

- (id)init;
- (void).cxx_destruct;

@end
