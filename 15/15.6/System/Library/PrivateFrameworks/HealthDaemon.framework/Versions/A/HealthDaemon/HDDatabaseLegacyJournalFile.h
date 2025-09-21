@class NSString, NSURL, NSFileHandle;

@interface HDDatabaseLegacyJournalFile : NSObject <HDJournalChapter> {
    NSURL *_URL;
    NSFileHandle *_fileHandle;
    unsigned int _version;
}

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
- (char)openForReadingWithError:(id *)a0;
- (unsigned int)readVersionWithError:(id *)a0;

@end
