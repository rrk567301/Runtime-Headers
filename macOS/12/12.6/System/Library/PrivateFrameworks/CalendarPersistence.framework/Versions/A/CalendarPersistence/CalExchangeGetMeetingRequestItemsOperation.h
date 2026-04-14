@class NSArray, EWSItemIdType;

@interface CalExchangeGetMeetingRequestItemsOperation : CalExchangeOperation

@property (retain) NSArray *requestMessages;
@property (retain) EWSItemIdType *associatedCalendarItemID;
@property (retain) NSArray *itemIds;

- (void)dealloc;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)initWithSessionID:(id)a0 associatedCalendarItemID:(id)a1;
- (id)_findMeetingRequestItemsWithBinding:(id)a0 session:(id)a1 context:(id)a2 error:(id *)a3;
- (id)_getItemsResponseShape:(BOOL)a0;
- (id)_findItemsResponseShape;

@end
