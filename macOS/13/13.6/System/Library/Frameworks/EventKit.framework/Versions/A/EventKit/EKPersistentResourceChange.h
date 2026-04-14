@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)calendar;
- (unsigned int)changeType;
- (id)timestamp;
- (id)updateCount;
- (id)notification;
- (id)calendarItem;
- (unsigned int)changedProperties;
- (int)entityType;
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
