@interface CalExchangeGetTaskOperation : CalExchangeGetItemOperation

+ (id)responseShape;

- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (void)updateTask:(id)a0 inCalendar:(id)a1 withTask:(id)a2;
- (void)createOrUpdateItems:(id)a0 inCalendar:(id)a1;

@end
