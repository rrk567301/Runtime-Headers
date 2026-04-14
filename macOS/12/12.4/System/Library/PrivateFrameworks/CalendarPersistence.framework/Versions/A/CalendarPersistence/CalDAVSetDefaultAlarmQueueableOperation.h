@interface CalDAVSetDefaultAlarmQueueableOperation : CalDAVSetPropertyQueueableOperation

- (void)resolveError:(id)a0 forAccountInfoProvider:(id)a1;
- (id)initWithChangeRequest:(id)a0 session:(id)a1 URI:(id)a2 property:(id)a3 value:(id)a4 valueType:(id)a5;

@end
