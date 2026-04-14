@class NSString;
@protocol CALNNotificationStorage;

@interface CALNNotificationStorageWrapper : NSObject <CALNNotificationStorage>

@property (retain) id<CALNNotificationStorage> wrappedStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWrappedStorage:(id)a0;
- (void)addNotificationRecords:(id)a0;
- (void)removeNotificationRecordsPassingTest:(id /* block */)a0;
- (void)removeAllNotificationRecords;
- (id)notificationRecords;
- (void).cxx_destruct;
- (void)addNotificationRecord:(id)a0;

@end
