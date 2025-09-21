@class NSString;

@interface SMNWindowsLogAction : SMNAction

@property (retain) NSString *tempDirectory;

+ (int)actionID;
+ (char)streamsResults;

- (void).cxx_destruct;
- (id)requestPayload;
- (char)expectsAResult;
- (char)receiveResultOnFd:(int)a0 errorIsFatal:(char *)a1;
- (void)finishedFile:(id)a0 length:(unsigned long long)a1;
- (void)updatedFile:(id)a0 partialLength:(unsigned long long)a1;

@end
