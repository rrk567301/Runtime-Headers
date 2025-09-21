@class NSData, NSURL;

@interface IMSArchive : NSObject {
    BOOL isWriting;
    struct archive { } *archive;
    NSData *archiveData;
    NSURL *archiveURL;
}

- (void)dealloc;
- (BOOL)close;
- (void).cxx_destruct;
- (BOOL)create:(id)a0;
- (BOOL)addEntry:(id)a0 data:(id)a1;
- (BOOL)openUsingData:(id)a0;
- (BOOL)openUsingURL:(id)a0;
- (id)readEntry:(id)a0;
- (id)readEntry:(id)a0 error:(id *)a1;
- (void)readEntry:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
