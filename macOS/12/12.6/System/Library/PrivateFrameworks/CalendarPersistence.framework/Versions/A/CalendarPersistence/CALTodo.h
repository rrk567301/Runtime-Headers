@class NSString;

@interface CALTodo : CALEntity

@property (retain) NSString *recurrenceDescription;

+ (id)entityFromManagedObject:(id)a0;
+ (id)todo;
+ (id)exchangeConversionLocalizedMessage;
+ (id)exchangeConversionLocalizedInfo;
+ (id)exchangeConversionLocalizedPluralMessage;
+ (id)exchangeConversionLocalizedPluralInfo;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setTimeZone:(id)a0;
- (id)timeZone;
- (id)location;
- (unsigned long long)order;
- (id)duration;
- (void)setDuration:(id)a0;
- (void)setPriority:(int)a0;
- (int)priority;
- (void)setLocation:(id)a0;
- (void)setStatus:(int)a0;
- (void)setOrder:(unsigned long long)a0;
- (void)setDueDate:(id)a0;
- (id)dueDate;
- (void)setCompletionDate:(id)a0;
- (id)completionDate;
- (BOOL)isCompleted;
- (void)cleanUp;
- (id)checkValidity;
- (BOOL)isExchangeCompatible;
- (void)actualCommitInManagedObjectContext:(id)a0;
- (BOOL)isValidStatus:(int)a0;
- (id)expandOnTimeRange:(id)a0;
- (void)forceDatesToGMT;
- (id)humanReadableRepeatDescription;
- (id)upperBoundDate;
- (id)_makeExchangeCompatible;
- (BOOL)_isAlarmExchangeCompatible:(id)a0;
- (void)_makeAlarmExchangeCompatible:(id)a0;
- (id)masterTodoUID;
- (void)setMasterTodoUID:(id)a0;

@end
