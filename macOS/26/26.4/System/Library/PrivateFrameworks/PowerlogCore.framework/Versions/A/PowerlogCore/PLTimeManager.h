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

- (id)storageQueue;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)a0 forTimeReference:(long long)a1;
- (id)bucketNSDate:(id)a0 withBucketInterval:(int)a1;
- (void)initializeTimeOffsets;
- (int)bucketTimeStampForDate:(id)a0 withTimeReference:(long long)a1 withBucketInterval:(int)a2;
- (double)hourBucketBaseSnapOffsetWithMonotonicTime:(long long)a0;
- (void).cxx_destruct;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)a0 forTimeReference:(long long)a1 usingBlock:(id /* block */)a2;
- (id)initialMonotonicTime;
- (void)logTimeEntry;
- (id)init;
- (double)hourBucketBaseSnapOffsetWithMonotonicTimeNow:(long long)a0;
- (void)getBootSessionUUID;
- (id)currentTimeFromTimeReference:(long long)a0 toTimeReference:(long long)a1;
- (double)timeOffsetForTimeReference:(long long)a0;
- (double)timeZoneHourBucketShift:(double)a0;
- (id)convertTime:(id)a0 fromTimeReference:(long long)a1 toTimeReference:(long long)a2;

@end
