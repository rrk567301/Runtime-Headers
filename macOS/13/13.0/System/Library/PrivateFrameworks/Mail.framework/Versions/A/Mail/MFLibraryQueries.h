@interface MFLibraryQueries : NSObject

+ (id)checkOutStatementToInsertMessage:(id)a0;
+ (id)checkOutStatementToCompletelyUpdateMessage:(id)a0;
+ (id)fromClauseForTables:(unsigned long long)a0 startingFromTableExpression:(id)a1;
+ (id)checkOutStatementForEventWithMessageID:(long long)a0 connection:(id)a1;
+ (id)checkOutStatementToInsertEvent:(id)a0;
+ (int)bindInsertEventStatement:(id)a0 withEvent:(id)a1 messageID:(long long)a2;

@end
