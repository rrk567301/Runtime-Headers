@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)calendar;
- (id)notification;
- (int)entityType;
- (id)timestamp;
- (id)updateCount;
- (unsigned int)changeType;
- (BOOL)alerted;
- (unsigned int)changedProperties;
- (id)calendarItem;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (id)createCount;
- (id)deleteCount;
- (id)deletedTitle;
- (unsigned int)publicStatus;

@end
