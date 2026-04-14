@class NSCountedSet, NSMutableSet;

@interface SpecialPathsCache : NSObject {
    NSMutableSet *_reservationsPaths;
    NSMutableSet *_records;
}

@property (readonly) NSCountedSet *recordTypes;

+ (id)cacheWithContentsOfFile:(id)a0;

- (id)records;
- (void)addRecord:(id)a0;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (void)removeRecord:(id)a0;
- (void)addRecords:(id)a0;
- (id)recordsForType:(unsigned long long)a0;
- (void)_addRecordsFromDictionary:(id)a0;
- (id)_recordsDictionary;
- (unsigned long long)countForType:(unsigned long long)a0;
- (BOOL)hasRecordType:(unsigned long long)a0;
- (id)recordsForVolumeUUID:(id)a0;
- (void)removeAllRecordsForType:(unsigned long long)a0;
- (id)reservedPaths;
- (BOOL)writeAtPath:(id)a0;

@end
