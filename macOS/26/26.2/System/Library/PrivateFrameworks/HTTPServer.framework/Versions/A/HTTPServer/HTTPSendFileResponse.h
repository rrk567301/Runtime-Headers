@class NSString, NSFileHandle, HTTPConnection;

@interface HTTPSendFileResponse : NSObject <HTTPResponse> {
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    BOOL aborted;
    NSFileHandle *fileHandle;
}

+ (void)initialize;

- (void)abort;
- (unsigned long long)contentLength;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)filePath;
- (unsigned long long)offset;
- (void)dealloc;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (BOOL)openFile;
- (BOOL)openFileIfNeeded;
- (id)readHTTPDataOfLength:(unsigned long long)a0 orLimit:(unsigned long long)a1;

@end
