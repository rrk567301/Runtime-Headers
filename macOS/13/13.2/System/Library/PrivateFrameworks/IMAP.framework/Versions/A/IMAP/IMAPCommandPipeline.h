@class NSMutableArray;

@interface IMAPCommandPipeline : NSObject

@property (nonatomic) unsigned int chunkSize;
@property (nonatomic) unsigned int expectedSize;
@property (nonatomic) BOOL isSending;
@property (readonly, nonatomic) BOOL isFull;
@property (retain, nonatomic) NSMutableArray *fetchUnits;
@property (readonly, nonatomic) id imapCommandPipelineLock;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addFetchCommandForUid:(unsigned int)a0 fetchItem:(id)a1 expectedLength:(unsigned int)a2;
- (void)_removeFetchUnitMatchingResponse:(id)a0;
- (id)failureResponsesFromSendingCommandsToServer:(id)a0 responseHandler:(id)a1 highPriority:(BOOL)a2;
- (id)_newCommandsAssigningResponseHandler:(id)a0;

@end
