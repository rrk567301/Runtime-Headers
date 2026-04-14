@class NSString;

@interface ULServiceStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (id)getServiceUUIDsWithServiceType:(unsigned int)a0;
- (struct vector<ULServiceDO, std::allocator<ULServiceDO>> { struct ULServiceDO *x0; struct ULServiceDO *x1; struct ULServiceDO *x2; })_fetchServicesByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)deleteAllServicesWithExceptions:(const void *)a0;
- (BOOL)deleteAllServicesWithUUIDs:(struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })a0;
- (BOOL)deleteOldestsServicesPerClientAboveMaxCount;
- (BOOL)deleteServiceForUUID:(struct uuid { unsigned char x0[16]; })a0;
- (struct vector<ULServiceDO, std::allocator<ULServiceDO>> { struct ULServiceDO *x0; struct ULServiceDO *x1; struct ULServiceDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<ULServiceDO, std::allocator<ULServiceDO>> { struct ULServiceDO *x0; struct ULServiceDO *x1; struct ULServiceDO *x2; })fetchAllServicesForClientId:(const void *)a0 andUserId:(const void *)a1;
- (struct vector<ULServiceDO, std::allocator<ULServiceDO>> { struct ULServiceDO *x0; struct ULServiceDO *x1; struct ULServiceDO *x2; })fetchAllServicesForServiceType:(unsigned long long)a0 onlyServicesWithLabels:(BOOL)a1;
- (struct optional<ULServiceDO> { union { char x0; struct ULServiceDO { unsigned long long x0; struct uuid { unsigned char x0[16]; } x1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x3; unsigned long long x4; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x5; } x1; } x0; BOOL x1; })fetchServiceByUUID:(struct uuid { unsigned char x0[16]; })a0;
- (id)fetchServiceManagedObjectWithUUID:(const struct uuid { unsigned char x0[16]; } *)a0 withManagedObjectContext:(id)a1;
- (id)getAllServiceUUIDs:(unsigned long long)a0;
- (BOOL)insertDataObjects:(const void *)a0;
- (BOOL)updateAllServicesWithMatchingClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a0 withNewClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a1;
- (BOOL)updateAllServicesWithMatchingServiceUUID:(struct uuid { unsigned char x0[16]; })a0 withNewServiceUUID:(struct uuid { unsigned char x0[16]; })a1;
- (BOOL)updateLastActiveTime:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0 forService:(struct uuid { unsigned char x0[16]; })a1;
- (BOOL)updateService:(struct uuid { unsigned char x0[16]; })a0 withServiceType:(unsigned int)a1 toNewServiceType:(unsigned int)a2;
- (BOOL)updateServiceLocationTypes:(struct uuid { unsigned char x0[16]; })a0 withLocationTypes:(unsigned long long)a1;

@end
