@class CoreDAVItem;

@interface CalDAVSetCalendarColorQueueableOperation : CalDAVSetPropertyQueueableOperation

@property (retain) CoreDAVItem *backupElement;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithChangeRequest:(id)a0 session:(id)a1 URI:(id)a2 colorString:(id)a3 colorName:(id)a4;

@end
