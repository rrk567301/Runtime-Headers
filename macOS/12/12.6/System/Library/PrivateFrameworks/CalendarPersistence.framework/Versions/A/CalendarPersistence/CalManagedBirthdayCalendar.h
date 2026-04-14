@class NSString;

@interface CalManagedBirthdayCalendar : CalManagedCalendar

@property (copy, nonatomic) NSString *accountIDForHeading;
@property (copy, nonatomic) NSString *groupHeaderTitle;

+ (id)entityName;
+ (id)color;
+ (id)singletonContainerSource;

- (id)type;
- (id)color;
- (void)awakeFromInsert;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)didSave;
- (BOOL)isBirthday;
- (id)sharees;
- (void)setSharees:(id)a0;
- (BOOL)isRenameable;
- (id)containerSource;
- (BOOL)isColorEditable;
- (BOOL)isFacebookBirthdayCalendar;
- (BOOL)allowsScheduling;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)a0;
- (BOOL)validateForWrite:(id *)a0;
- (BOOL)keepSyncRecordLocal;
- (BOOL)supportsPublishing;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)a0 fromServer:(BOOL)a1;

@end
