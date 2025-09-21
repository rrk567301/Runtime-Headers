@class NSString, NSDictionary, NSURL, NSSet, NSObject;

@interface SMNAction : NSObject

@property (retain) NSURL *systemPath;
@property (copy) id /* block */ shouldContinueBlock;
@property (readonly) int returnCode;
@property (retain) NSString *uniqueID;
@property (readonly) NSObject *requestPayload;
@property (readonly) char expectsAResult;
@property (retain) NSDictionary *result;
@property (readonly) NSSet *setOfClassesToDecodeInTheResult;
@property (retain) NSString *selectiveDescription;

+ (int)actionID;
+ (id)descriptionForActionID:(int)a0;
+ (id)actionWithPayload:(id)a0;
+ (void)sendErrorResponseOnStream:(id)a0;
+ (char)shouldCloseInboundStreamWhenDone;
+ (char)shouldCloseOutboundStreamWhenDone;
+ (char)streamsResults;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resultData;
- (char)sendActionWithSession:(id)a0 error:(id *)a1;
- (char)receiveResultOnFd:(int)a0 errorIsFatal:(char *)a1;
- (char)sendResultOnFd:(int)a0;
- (void)processResultsOverStream:(id)a0;
- (char)receiveBinaryStreamOnStream:(id)a0 error:(id *)a1;
- (char)receivePreV4ResultPortionOnStream:(id)a0 error:(id *)a1;
- (char)receiveResultOnFd:(int)a0;
- (char)receiveResultPortionOnStream:(id)a0 error:(id *)a1;
- (char)sendActionOverStream:(id)a0 error:(id *)a1;
- (char)sendRequestPortionOnStream:(id)a0 error:(id *)a1;
- (void)sendSuccessResponseOnStream:(id)a0;
- (char)setResultFromData:(id)a0;
- (char)setResultFromDict:(id)a0;

@end
