@class NSString;

@interface ULLabelStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMicroLocationRecordingLabelsTable::Entry, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationRecordingLabelsTable::Entry *, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; } x2; })fetchRecordingLabelsForServiceUuid:(const struct uuid { unsigned char x0[16]; } *)a0 atLoiGroupID:(const struct uuid { unsigned char x0[16]; } *)a1 fromTime:(const void *)a2 limit:(unsigned int)a3;
- (struct vector<CLMicroLocationRecordingLabelsTable::Entry, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationRecordingLabelsTable::Entry *, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; } x2; })_fetchLabelsByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (char)deleteAllLabelsOfDeletedServices;
- (char)deleteRecordingLabelsForClients:(const void *)a0;
- (char)deleteSimilarityListLabelsOlderThan:(double)a0 orNewerThan:(double)a1;
- (struct vector<CLMicroLocationRecordingLabelsTable::Entry, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationRecordingLabelsTable::Entry *, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<CLMicroLocationRecordingLabelsTable::Entry, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationRecordingLabelsTable::Entry *, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; } x2; })fetchRecordingLabelsForClient:(const void *)a0 limit:(unsigned int)a1;
- (struct vector<CLMicroLocationRecordingLabelsTable::Entry, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationRecordingLabelsTable::Entry *, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry *x0; } x2; })fetchRecordingLabelsForServiceUuid:(const struct uuid { unsigned char x0[16]; } *)a0 limit:(unsigned int)a1;
- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })getAllRecordingLabelsClientIds;
- (char)insertEntries:(const void *)a0;
- (char)updateAllLabelsWithMatchingClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })a0 withNewClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })a1;
- (char)updateAllLabelsWithMatchingServiceUUID:(struct uuid { unsigned char x0[16]; })a0 withNewServiceUUID:(struct uuid { unsigned char x0[16]; })a1;

@end
