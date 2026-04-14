@class NSString;

@interface ULAltitudeStore : ULStore <ULStoreProtocol> {
    struct vector<ULAltitudeDO, std::allocator<ULAltitudeDO>> { struct ULAltitudeDO *__begin_; struct ULAltitudeDO *__end_; struct { struct ULAltitudeDO *__cap_; } ; } _buffer;
    struct uuid { unsigned char data[16]; } _currentLocationId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)bufferMaxSize;
+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (void).cxx_destruct;
- (unsigned int)count;
- (id).cxx_construct;
- (BOOL)deleteAllRecords;
- (struct vector<ULAltitudeDO, std::allocator<ULAltitudeDO>> { struct ULAltitudeDO *x0; struct ULAltitudeDO *x1; struct { struct ULAltitudeDO *x0; } x2; })fetchAltitudeEntriesWithStartDate:(id)a0 endDate:(id)a1 fetchLimit:(unsigned long long)a2 ascending:(BOOL)a3;
- (BOOL)deleteRecordsOlderThan:(double)a0 orNewerThan:(double)a1;
- (struct vector<ULAltitudeDO, std::allocator<ULAltitudeDO>> { struct ULAltitudeDO *x0; struct ULAltitudeDO *x1; struct { struct ULAltitudeDO *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (BOOL)flushStoreBuffer;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0;
- (BOOL)insertDataObjects:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)insertDataObjectsBuffered:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)isBufferingEnabled;

@end
