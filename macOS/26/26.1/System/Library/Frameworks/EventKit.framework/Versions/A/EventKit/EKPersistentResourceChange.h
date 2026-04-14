@interface EKPersistentResourceChange : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (id)notification;
- (int)entityType;
- (unsigned int)changeType;
- (id)calendar;
- (id)timestamp;
- (BOOL)alerted;
- (unsigned int)changedProperties;
- (id)calendarItem;
- (id)updateCount;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (id)createCount;
- (id)deleteCount;
- (id)deletedTitle;
- (unsigned int)publicStatus;

@end
