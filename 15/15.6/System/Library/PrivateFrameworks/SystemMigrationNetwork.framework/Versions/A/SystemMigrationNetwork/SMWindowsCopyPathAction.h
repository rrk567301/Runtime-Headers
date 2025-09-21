@class NSString, NSURL;
@protocol SMNWindowsCopyPathActionDelegate;

@interface SMWindowsCopyPathAction : SMNAction

@property (retain) NSString *sourcePath;
@property (retain) NSURL *destinationPath;
@property (retain) NSString *lastPathReceived;
@property id<SMNWindowsCopyPathActionDelegate> delegate;
@property (retain) NSString *expandedPath;

+ (int)actionID;
+ (char)streamsResults;

- (void).cxx_destruct;
- (char)shouldContinue;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1;
- (id)requestPayload;
- (char)expectsAResult;
- (char)receiveResultOnFd:(int)a0 errorIsFatal:(char *)a1;
- (void)finishedFile:(id)a0 length:(unsigned long long)a1;
- (id)localPathForFile:(id)a0;
- (void)updatedFile:(id)a0 partialLength:(unsigned long long)a1;

@end
