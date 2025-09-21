@class NSURL;

@interface PLJournalFile : NSObject {
    Class _payloadClass;
}

@property (readonly, nonatomic) NSURL *url;

+ (char)fileExistsAtURL:(id)a0;
+ (char)copyURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (char)createEmptyURL:(id)a0 error:(id *)a1;
+ (char)moveURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (char)removeURL:(id)a0 error:(id *)a1;
+ (char)writeData:(id)a0 toURL:(id)a1 atomically:(char)a2 error:(id *)a3;

- (void).cxx_destruct;
- (char)fileSize:(unsigned long long *)a0 error:(id *)a1;
- (char)openForWritingUsingBlock:(id /* block */)a0 error:(id *)a1;
- (char)openForReadingUsingBlock:(id /* block */)a0 error:(id *)a1;
- (char)_fileSize:(unsigned long long *)a0 forKey:(id)a1 error:(id *)a2;
- (char)allocatedFileSize:(unsigned long long *)a0 error:(id *)a1;
- (char)appendEntries:(id)a0 error:(id *)a1;
- (char)copyToURL:(id)a0 error:(id *)a1;
- (char)createEmptyFileWithError:(id *)a0;
- (char)enumerateEntriesUsingBlock:(id /* block */)a0 decodePayload:(char)a1 error:(id *)a2;
- (char)fileExists;
- (id)fileHandleForWritingWithError:(id *)a0;
- (id)initWithURL:(id)a0 payloadClass:(Class)a1;
- (char)moveToURL:(id)a0 error:(id *)a1;
- (char)removeFileWithError:(id *)a0;

@end
