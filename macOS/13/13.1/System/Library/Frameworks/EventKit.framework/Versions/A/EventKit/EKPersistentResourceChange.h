@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)calendar;
- (unsigned int)changeType;
- (id)timestamp;
- (id)updateCount;
- (id)notification;
- (id)calendarItem;
- (unsigned int)changedProperties;
- (int)entityType;
- (BOOL)alerted;
- (id)changedByDisplayName;
- (id)changedByAddress;
- (id)changedByFirstName;
- (id)changedByLastName;
- (id)createCount;
- (id)deleteCount;
- (id)deletedTitle;
- (unsigned int)publicStatus;

@end
