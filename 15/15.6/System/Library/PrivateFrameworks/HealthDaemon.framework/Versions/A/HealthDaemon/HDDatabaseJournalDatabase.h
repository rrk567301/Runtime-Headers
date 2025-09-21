@class NSDate, NSString, NSURL, HDKeyValueDomain, HDSQLiteDatabase, NSNumber;

@interface HDDatabaseJournalDatabase : NSObject <HDJournalChapter> {
    NSURL *_databaseURL;
    HDSQLiteDatabase *_database;
    NSNumber *_size;
    NSDate *_modificationDate;
    HDKeyValueDomain *_keyValueDomain;
    long long _enumeratedBytesThreshold;
}

@property (retain, nonatomic) HDSQLiteDatabase *unitTesting_underlyingDatabase;
@property (retain, nonatomic) HDKeyValueDomain *unitTesting_keyValueDomainOverride;
@property (copy, nonatomic) id /* block */ unitTesting_didCreateDatabaseConnectionHandler;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *journalPath;
@property (readonly, nonatomic) char isOpen;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) double modificationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)a0;
- (char)removeWithError:(id *)a0;
- (char)appendData:(id)a0 entryClass:(Class)a1 error:(id *)a2;
- (char)canAppendData:(id)a0;
- (char)createAndOpenForWritingWithError:(id *)a0;
- (unsigned int)enumerateEntriesWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (char)flushDataToDisk:(id *)a0;
- (id)getIdentifierAndCreationDate:(id *)a0 error:(id *)a1;
- (char)openForReadingWithError:(id *)a0;
- (unsigned int)readVersionWithError:(id *)a0;
- (void)unitTesting_setEnumeratedBytesThreshold:(long long)a0;

@end
