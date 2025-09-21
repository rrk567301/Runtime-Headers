@class NSString, SGDatabaseJournalFile, NSObject;
@protocol OS_dispatch_queue;

@interface SGDatabaseJournal : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    unsigned long long _serialNumber;
    NSString *_uuid;
    char _inMemory;
    SGDatabaseJournalFile *_currentFile;
}

@property (readonly, nonatomic) char journaling;

+ (id /* block */)_binderForDictionary:(id)a0;
+ (id)journalForInMemoryDb;
+ (id)_allowedTypesForQueryKeyedArchives;
+ (id)journalWithName:(id)a0;

- (void).cxx_destruct;
- (char)_executeFile:(id)a0 onDb:(id)a1 becameLocked:(char *)a2;
- (char)startJournaling;
- (char)deleteAllJournaledQueries;
- (char)executeQueriesOnDatabase:(id)a0;
- (void)runQuery:(id)a0 values:(id)a1 onDb:(id)a2;
- (char)stopJournaling;

@end
