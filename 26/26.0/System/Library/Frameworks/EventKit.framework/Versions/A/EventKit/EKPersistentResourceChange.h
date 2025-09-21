@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)timestamp;
- (id)notification;
- (unsigned int)changeType;
- (int)entityType;
- (id)calendar;
- (unsigned int)changedProperties;
- (id)calendarItem;
- (id)updateCount;
- (BOOL)alerted;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (id)createCount;
- (id)deleteCount;
- (id)deletedTitle;
- (unsigned int)publicStatus;

@end
