@interface CalExchangeDeleteOccurrenceItemOperation : CalExchangeDeleteItemOperation

- (void)dealloc;
- (id)errorDescription;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)initWithSessionID:(id)a0 itemId:(id)a1 eventID:(id)a2 itemName:(id)a3 shouldSendCancellation:(BOOL)a4;

@end
