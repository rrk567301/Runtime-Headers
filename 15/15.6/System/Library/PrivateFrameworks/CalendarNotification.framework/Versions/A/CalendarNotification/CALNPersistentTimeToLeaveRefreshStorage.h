@class NSString, CALNInMemoryTimeToLeaveRefreshStorage, NSObject;
@protocol OS_dispatch_queue;

@interface CALNPersistentTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage>

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) CALNInMemoryTimeToLeaveRefreshStorage *inMemoryStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistentStorageWithPath:(id)a0;
+ (id)timeToLeaveRefreshDataFromPersistentStorageWithPath:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)_addRefreshDate:(id)a0 withIdentifier:(id)a1;
- (char)_loadDataWithError:(id *)a0;
- (void)_removeData;
- (void)_removeRefreshDateWithIdentifier:(id)a0;
- (char)_saveDataWithError:(id *)a0;
- (void)addRefreshDate:(id)a0 withIdentifier:(id)a1;
- (id)refreshDateWithIdentifier:(id)a0;
- (id)refreshDates;
- (void)removeRefreshDateWithIdentifier:(id)a0;
- (void)removeRefreshDates;

@end
