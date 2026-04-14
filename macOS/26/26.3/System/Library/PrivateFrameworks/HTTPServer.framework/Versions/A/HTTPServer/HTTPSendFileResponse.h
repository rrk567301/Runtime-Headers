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

- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (id)filePath;
- (void)abort;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (BOOL)openFile;
- (BOOL)openFileIfNeeded;
- (id)readHTTPDataOfLength:(unsigned long long)a0 orLimit:(unsigned long long)a1;

@end
