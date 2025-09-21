@class NSString;

@interface ULWiFiHistogramStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULWiFiHistogramDO, std::allocator<ULWiFiHistogramDO>> { struct ULWiFiHistogramDO *x0; struct ULWiFiHistogramDO *x1; struct ULWiFiHistogramDO *x2; })_fetchWiFiHistogramByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)deleteOrphanRecords;
- (struct vector<ULWiFiHistogramDO, std::allocator<ULWiFiHistogramDO>> { struct ULWiFiHistogramDO *x0; struct ULWiFiHistogramDO *x1; struct ULWiFiHistogramDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct optional<ULWiFiHistogramDO> { union { char x0; struct ULWiFiHistogramDO { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; struct uuid { unsigned char x0[16]; } x1; struct WifiHistogram { void /* function */ **x0; struct RepeatedPtrField<CLMicroLocationProto::ChannelAndCount> { void **x0; int x1; int x2; int x3; } x1; int x2; int x3; unsigned int x4[1]; } x2; } x1; } x0; BOOL x1; })fetchMostRecentWifiHistogramAtLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0 beforeTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a1;
- (BOOL)insertDataObjects:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;

@end
