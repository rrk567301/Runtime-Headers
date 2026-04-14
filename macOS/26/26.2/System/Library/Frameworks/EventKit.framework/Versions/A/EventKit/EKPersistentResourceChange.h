@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)calendar;
- (unsigned int)changeType;
- (id)notification;
- (id)updateCount;
- (int)entityType;
- (id)timestamp;
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
