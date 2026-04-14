@class NSString, NSDictionary, NSURL, NSSet, NSObject;

@interface SMNAction : NSObject

@property (retain) NSURL *systemPath;
@property (copy) id /* block */ shouldContinueBlock;
@property (readonly) int returnCode;
@property (retain) NSString *uniqueID;
@property (readonly) NSObject *requestPayload;
@property (readonly) BOOL expectsAResult;
@property (retain) NSDictionary *result;
@property (readonly) NSSet *setOfClassesToDecodeInTheResult;
@property (retain) NSString *selectiveDescription;

+ (int)actionID;
+ (id)descriptionForActionID:(int)a0;
+ (BOOL)streamsResults;
+ (BOOL)shouldCloseInboundStreamWhenDone;
+ (BOOL)shouldCloseOutboundStreamWhenDone;
+ (id)actionWithPayload:(id)a0;
+ (void)sendErrorResponseOnStream:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)resultData;
- (BOOL)sendActionWithSession:(id)a0 error:(id *)a1;
- (BOOL)receiveResultOnFd:(int)a0 errorIsFatal:(BOOL *)a1;
- (BOOL)setResultFromDict:(id)a0;
- (BOOL)sendResultOnFd:(int)a0;
- (void)sendSuccessResponseOnStream:(id)a0;
- (BOOL)sendActionOverStream:(id)a0 error:(id *)a1;
- (BOOL)sendRequestPortionOnStream:(id)a0 error:(id *)a1;
- (BOOL)receiveResultPortionOnStream:(id)a0 error:(id *)a1;
- (BOOL)receiveBinaryStreamOnStream:(id)a0 error:(id *)a1;
- (BOOL)receivePreV4ResultPortionOnStream:(id)a0 error:(id *)a1;
- (void)processResultsOverStream:(id)a0;
- (BOOL)setResultFromData:(id)a0;
- (BOOL)receiveResultOnFd:(int)a0;

@end
