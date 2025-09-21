@class NSString, NSObject, CALNInMemoryTriggeredEventNotificationDataStorage;
@protocol OS_dispatch_queue;

@interface CALNPersistentTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage> {
    char _protected;
}

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) CALNInMemoryTriggeredEventNotificationDataStorage *inMemoryStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notificationDataFromPersistentStorageWithPath:(id)a0 error:(id *)a1;
+ (id)persistentStorageWithPath:(id)a0 isProtectedStorage:(char)a1;

- (void).cxx_destruct;
- (id)notificationData;
- (id)notificationDataWithIdentifier:(id)a0;
- (void)_addNotificationData:(id)a0 withIdentifier:(id)a1;
- (char)_loadDataWithError:(id *)a0;
- (void)_removeData;
- (void)_removeNotificationDataWithIdentifier:(id)a0;
- (char)_saveDataWithError:(id *)a0;
- (void)addNotificationData:(id)a0 withIdentifier:(id)a1;
- (id)initWithPath:(id)a0 isProtectedStorage:(char)a1;
- (void)removeNotificationData;
- (void)removeNotificationDataWithIdentifier:(id)a0;

@end
