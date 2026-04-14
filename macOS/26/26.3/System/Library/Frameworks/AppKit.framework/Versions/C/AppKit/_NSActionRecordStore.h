@class NSArray, NSMutableArray;

@interface _NSActionRecordStore : NSObject {
    NSMutableArray *_actionRecords;
}

@property (readonly, copy) NSArray *actionRecords;

+ (id)sharedActionRecordStoreIfExists;
+ (id)sharedActionRecordStore;

- (void)addRecord:(id)a0;
- (void)dealloc;
- (void)addRecordWithAction:(SEL)a0 target:(id)a1 sender:(id)a2;
- (void)insertObject:(id)a0 inActionRecordsAtIndex:(unsigned long long)a1;
- (void)removeObjectFromActionRecordsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInActionRecordsAtIndex:(unsigned long long)a0 withObject:(id)a1;

@end
