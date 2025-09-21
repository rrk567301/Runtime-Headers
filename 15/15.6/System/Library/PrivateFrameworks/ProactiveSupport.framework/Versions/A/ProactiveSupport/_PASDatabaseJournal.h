@class NSString, _PASDatabaseJournalFile, NSObject;
@protocol OS_dispatch_queue;

@interface _PASDatabaseJournal : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    unsigned long long _serialNumber;
    NSString *_uuid;
    char _inMemory;
    _PASDatabaseJournalFile *_currentFile;
}

@property (readonly, nonatomic) char journaling;

+ (id /* block */)_binderForDictionary:(id)a0;
+ (id)_journalPathForDbPath:(id)a0;
+ (id)journalForInMemoryDb;
+ (id)journalWithDbPath:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (char)_executeFile:(id)a0 onDb:(id)a1 becameLocked:(char *)a2;
- (char)startJournaling;
- (char)_executeNextRecordFromFile:(id)a0 onDb:(id)a1 becameLocked:(char *)a2 deleteFile:(char *)a3;
- (char)deleteAllJournaledQueries;
- (id)directoryPath;
- (char)executeQueriesOnDatabase:(id)a0;
- (void)runQuery:(id)a0 values:(id)a1 onDb:(id)a2;
- (char)stopJournaling;

@end
