@class NSString;

@interface SKGJournalReader : NSObject {
    NSString *_resourcePath;
}

+ (BOOL)processJournalRecordWithFd:(int)a0 atOffset:(unsigned long long)a1 withSize:(unsigned long long)a2 addBlock:(id /* block */)a3 delBlock:(id /* block */)a4;

- (void).cxx_destruct;
- (BOOL)enumerateItemsOfJournalAtPath:(id)a0 itemAdds:(id /* block */)a1 itemUpdates:(id /* block */)a2 itemDeletes:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (id)eventJournalPaths;
- (id)initWithResourceDirectoryPath:(id)a0;
- (id)journalPaths;
- (id)journalReaderResourcePath;
- (BOOL)removeJournalPath:(id)a0 error:(id *)a1;

@end
