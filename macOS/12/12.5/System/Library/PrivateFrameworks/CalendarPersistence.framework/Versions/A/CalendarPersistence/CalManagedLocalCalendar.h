@interface CalManagedLocalCalendar : CalManagedCalendar

@property BOOL isEditable;
@property (nonatomic) BOOL isSuggestedEventCalendar;
@property (nonatomic) BOOL isNaturalLanguageSuggestedEventCalendar;

+ (id)entityName;
+ (id)singletonContainerSource;
+ (void)enableChangeRequestNotifications;
+ (id)localCalendarsGroupTitle;
+ (id)singletonSuggestedEventContainerSource;

- (id)type;
- (id)properties;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)didSave;
- (BOOL)isLocal;
- (BOOL)isWritable;
- (id)publishURL;
- (id)sharees;
- (void)setSharees:(id)a0;
- (id)subscriptionURL;
- (id)containerSource;
- (id)calendarSource;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)a0;
- (BOOL)isMigrateable;
- (BOOL)validateForWrite:(id *)a0;
- (BOOL)supportsPublishing;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)a0 fromServer:(BOOL)a1;
- (id)nodesForOrdering;
- (long long)notificationCountForClass:(Class)a0;

@end
