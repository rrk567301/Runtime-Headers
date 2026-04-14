@class NSString, NSDictionary, PLSQLiteConnection, PLStorageOperator;

@interface PLTimeManager : NSObject <PLTimeReferenceManager>

@property (weak) PLSQLiteConnection *connection;
@property (retain) NSDictionary *timeReferences;
@property (retain) NSDictionary *notificationsToTimeReferences;
@property (weak) PLStorageOperator *storageOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerForTimeChangedCallbackWithIdentifier:(id)a0 forTimeReference:(long long)a1 usingBlock:(id /* block */)a2;
- (double)hourBucketBaseSnapOffsetWithMonotonicTime:(long long)a0;
- (id)initialMonotonicTime;
- (id)bucketNSDate:(id)a0 withBucketInterval:(int)a1;
- (double)hourBucketBaseSnapOffsetWithMonotonicTimeNow:(long long)a0;
- (id)currentTimeFromTimeReference:(long long)a0 toTimeReference:(long long)a1;
- (int)bucketTimeStampForDate:(id)a0 withTimeReference:(long long)a1 withBucketInterval:(int)a2;
- (void)logTimeEntry;
- (void)initializeTimeOffsets;
- (void).cxx_destruct;
- (id)storageQueue;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)a0 forTimeReference:(long long)a1;
- (void)getBootSessionUUID;
- (double)timeOffsetForTimeReference:(long long)a0;
- (double)timeZoneHourBucketShift:(double)a0;
- (id)init;
- (id)convertTime:(id)a0 fromTimeReference:(long long)a1 toTimeReference:(long long)a2;

@end
