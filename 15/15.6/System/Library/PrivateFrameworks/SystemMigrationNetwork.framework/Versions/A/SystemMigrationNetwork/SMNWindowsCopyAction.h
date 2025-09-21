@class NSNumber, NSObject;
@protocol SMNWindowsCopyActionDelegate;

@interface SMNWindowsCopyAction : SMNAction <SMWindowsArchiveStreamDelegate>

@property (retain) NSNumber *componentIdentifier;
@property (retain) NSNumber *componentSize;
@property (retain) NSObject *retryContext;
@property unsigned long long totalWrittenLength;
@property id<SMNWindowsCopyActionDelegate> delegate;

+ (int)actionID;
+ (char)streamsResults;

- (id)description;
- (void).cxx_destruct;
- (id)result;
- (char)shouldContinue;
- (id)requestPayload;
- (id)initWithComponentIdentifier:(id)a0 andSize:(id)a1;
- (char)receiveResultOnFd:(int)a0 errorIsFatal:(char *)a1;
- (void)finishedFile:(id)a0 length:(unsigned long long)a1;
- (id)localPathForFile:(id)a0;
- (void)updatedFile:(id)a0 partialLength:(unsigned long long)a1;

@end
