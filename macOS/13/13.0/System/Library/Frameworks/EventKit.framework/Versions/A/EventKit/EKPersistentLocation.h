@interface EKPersistentLocation : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;
+ (Class)alternateUniverseClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTitle:(id)a0;
- (id)address;
- (id)title;
- (void)setAddress:(id)a0;
- (id)latitude;
- (id)longitude;
- (void)setLatitude:(id)a0;
- (void)setLongitude:(id)a0;
- (id)referenceFrame;
- (id)radius;
- (void)setReferenceFrame:(id)a0;
- (void)setRadius:(id)a0;
- (id)mapKitHandle;
- (int)entityType;
- (void)setMapKitHandle:(id)a0;
- (id)routing;
- (void)setRouting:(id)a0;
- (id)contactLabel;
- (void)setContactLabel:(id)a0;
- (id)derivedFrom;
- (void)setDerivedFrom:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (id)calendarItemOwner;
- (void)setAlarmOwner:(id)a0;
- (id)alarmOwner;

@end
