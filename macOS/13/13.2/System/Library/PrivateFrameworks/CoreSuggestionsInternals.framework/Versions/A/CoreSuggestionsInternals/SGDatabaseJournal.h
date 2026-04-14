@class NSString, SGDatabaseJournalFile, NSObject;
@protocol OS_dispatch_queue;

@interface SGDatabaseJournal : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    unsigned long long _serialNumber;
    NSString *_uuid;
    BOOL _inMemory;
    SGDatabaseJournalFile *_currentFile;
}

@property (readonly, nonatomic) BOOL journaling;

+ (id)journalForInMemoryDb;
+ (id /* block */)_binderForDictionary:(id)a0;
+ (id)journalWithName:(id)a0;
+ (id)_allowedTypesForQueryKeyedArchives;

- (void).cxx_destruct;
- (void)runQuery:(id)a0 values:(id)a1 onDb:(id)a2;
- (BOOL)_executeFile:(id)a0 onDb:(id)a1 becameLocked:(BOOL *)a2;
- (BOOL)executeQueriesOnDatabase:(id)a0;
- (BOOL)deleteAllJournaledQueries;
- (BOOL)startJournaling;
- (BOOL)stopJournaling;

@end
