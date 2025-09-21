@class NSMutableArray;

@interface IMAPCommandPipeline : NSObject

@property (nonatomic) unsigned int chunkSize;
@property (nonatomic) unsigned int expectedSize;
@property (nonatomic) char isSending;
@property (readonly, nonatomic) char isFull;
@property (retain, nonatomic) NSMutableArray *fetchUnits;
@property (readonly, nonatomic) id imapCommandPipelineLock;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_newCommandsAssigningResponseHandler:(id)a0;
- (void)_removeFetchUnitMatchingResponse:(id)a0;
- (void)addFetchCommandForUid:(unsigned int)a0 fetchItem:(id)a1 expectedLength:(unsigned int)a2;
- (id)failureResponsesFromSendingCommandsToServer:(id)a0 responseHandler:(id)a1 highPriority:(char)a2;

@end
