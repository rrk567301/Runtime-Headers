@interface EKPersistentLocation : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;
+ (Class)alternateUniverseClass;

- (void)setAddress:(id)a0;
- (id)latitude;
- (void)setLongitude:(id)a0;
- (id)referenceFrame;
- (id)longitude;
- (void)setLatitude:(id)a0;
- (id)address;
- (id)description;
- (void)setReferenceFrame:(id)a0;
- (void)setRadius:(id)a0;
- (id)radius;
- (id)semanticIdentifier;
- (id)title;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCalendarItemOwner:(id)a0;
- (int)entityType;
- (void)setTitle:(id)a0;
- (id)calendarItemOwner;
- (id)mapKitHandle;
- (id)routing;
- (void)setMapKitHandle:(id)a0;
- (void)setRouting:(id)a0;
- (void)setDerivedFrom:(id)a0;
- (id)alarmOwner;
- (id)contactLabel;
- (id)derivedFrom;
- (void)setAlarmOwner:(id)a0;
- (void)setContactLabel:(id)a0;

@end
