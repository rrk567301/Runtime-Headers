@class NSArray;

@interface CalExchangeRemoveMeetingRequestItemsOperation : CalExchangeOperation

@property (retain) NSArray *requestMessages;

- (void)dealloc;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)initWithSessionID:(id)a0 requestMessages:(id)a1;

@end
