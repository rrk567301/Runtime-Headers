@class NSString, CoreDAVItem;

@interface CalDAVSetPropertyQueueableOperation : CalDAVCalendarQueueableOperation

@property (retain) CoreDAVItem *propPatchElement;
@property (retain) NSString *uri;

+ (void)initialize;

- (void).cxx_destruct;
- (void)performOperation;
- (void)resolveError:(id)a0 forAccountInfoProvider:(id)a1;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)a0 session:(id)a1 URI:(id)a2 property:(id)a3 value:(id)a4 valueType:(id)a5;

@end
