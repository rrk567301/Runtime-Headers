@interface CalManagedIMAPCalendar : CalManagedCalendar

+ (id)entityName;

- (id)type;
- (id)relativePath;
- (void)awakeFromInsert;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)shouldShowInPrimaryAccounts;
- (BOOL)isEventContainer;
- (BOOL)isWritable;
- (id)sharees;
- (void)setSharees:(id)a0;
- (BOOL)allowsScheduling;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)a0;
- (BOOL)validateForWrite:(id *)a0;
- (BOOL)keepSyncRecordLocal;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)a0 fromServer:(BOOL)a1;
- (id)nodesInNamespace;

@end
