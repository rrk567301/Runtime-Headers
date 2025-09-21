@class NSString;

@interface ULRecordingEventStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULRecordingEventDO, std::allocator<ULRecordingEventDO>> { struct ULRecordingEventDO *x0; struct ULRecordingEventDO *x1; struct ULRecordingEventDO *x2; })_fetchRecordingEventTriggers:(const void *)a0 atLoiGroupId:(const void *)a1 fromTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a2 toTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a3 withLimit:(unsigned int)a4;
- (struct vector<ULRecordingEventDO, std::allocator<ULRecordingEventDO>> { struct ULRecordingEventDO *x0; struct ULRecordingEventDO *x1; struct ULRecordingEventDO *x2; })_fetchRecordingEventsByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)batchTransferRecordingEventsForRecordingUUIDs:(const void *)a0 withEventTypes:(const void *)a1 batchSize:(unsigned long long)a2 andLimit:(unsigned int)a3 intoTargetStore:(id)a4;
- (BOOL)batchTransferRecordsUsingBatchSize:(unsigned long long)a0 andLimit:(unsigned long long)a1 intoTargetStore:(id)a2;
- (unsigned int)countRecordingEventsForLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (unsigned int)countRecordingEventsFromTime:(double)a0 toTime:(double)a1 atLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a2;
- (BOOL)deleteRecordingEventsFromRecordingUUIDs:(const void *)a0;
- (struct vector<ULRecordingEventDO, std::allocator<ULRecordingEventDO>> { struct ULRecordingEventDO *x0; struct ULRecordingEventDO *x1; struct ULRecordingEventDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })fetchDistinctRecordingEventsFromTime:(double)a0 toTime:(double)a1 atLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a2 withLimit:(unsigned int)a3;
- (struct optional<ULRecordingEventDO> { union { char x0; struct ULRecordingEventDO { struct uuid { unsigned char x0[16]; } x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x2; struct uuid { unsigned char x0[16]; } x3; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x4; int x5; struct RecordingEvent { void /* function */ **x0; double x1; struct ReceivedEventAction *x2; struct AppLaunch *x3; struct BacklightOn *x4; struct BatteryChargerConnected *x5; struct ForcedRecording *x6; struct HomeKitAccessory *x7; struct HomeKitScene *x8; int x9; BOOL x10; BOOL x11; struct NowPlaying *x12; struct RecordingRequest *x13; struct TruthLabelDonation *x14; struct RepeatedField<int> { int *x0; int x1; int x2; } x15; int x16; int x17; struct AssociatedAccessPointInfo *x18; int x19; unsigned int x20[1]; } x6; struct optional<boost::uuids::uuid> { union { char x0; struct uuid { unsigned char x0[16]; } x1; } x0; BOOL x1; } x7; } x1; } x0; BOOL x1; })fetchMostRecentRecordingForLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (struct vector<ULRecordingEventDO, std::allocator<ULRecordingEventDO>> { struct ULRecordingEventDO *x0; struct ULRecordingEventDO *x1; struct ULRecordingEventDO *x2; })fetchRecordingEventTriggersForLearningMeasurements:(const void *)a0;
- (struct vector<ULRecordingEventDO, std::allocator<ULRecordingEventDO>> { struct ULRecordingEventDO *x0; struct ULRecordingEventDO *x1; struct ULRecordingEventDO *x2; })fetchRecordingEventTriggersForLearningMeasurements:(const void *)a0 atLoiGroupId:(const void *)a1;
- (struct vector<ULRecordingEventDO, std::allocator<ULRecordingEventDO>> { struct ULRecordingEventDO *x0; struct ULRecordingEventDO *x1; struct ULRecordingEventDO *x2; })fetchRecordingEventsForRecordingUUIDs:(const void *)a0;
- (struct vector<ULRecordingEventDO, std::allocator<ULRecordingEventDO>> { struct ULRecordingEventDO *x0; struct ULRecordingEventDO *x1; struct ULRecordingEventDO *x2; })fetchRecordingEventsFromTriggerUUIDs:(const void *)a0;
- (struct vector<ULRecordingEventDO, std::allocator<ULRecordingEventDO>> { struct ULRecordingEventDO *x0; struct ULRecordingEventDO *x1; struct ULRecordingEventDO *x2; })fetchRecordingEventsWithScanMeasurements:(const void *)a0 fromTime:(double)a1 toTime:(double)a2 withLimit:(unsigned int)a3;
- (id)getDistinctRecordingUUIDsWithLimit:(unsigned int)a0;
- (struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })getOldestRecordingTimestamp;
- (id)getRecordingUUIDsForLocalizationActionsFromTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a0 toTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a1;
- (id)getRecordingUUIDsForRecordingEventActionsAtLoiGroupId:(struct optional<const boost::uuids::uuid> { union { char x0; struct uuid { unsigned char x0[16]; } x1; } x0; BOOL x1; })a0 fromTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a1 toTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a2 withLimit:(unsigned int)a3;
- (id)getRecordingUUIDsOlderThan:(double)a0 orNewerThan:(double)a1;
- (id)getTriggerUUIDsForLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (BOOL)insertDataObjects:(const void *)a0;
- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; })selectAllRecordingLOITypesFromTime:(double)a0 andLimit:(unsigned long long)a1;

@end
