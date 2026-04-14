@interface EKPersistentLocation : EKPersistentObject

+ (Class)alternateUniverseClass;
+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (void)setAddress:(id)a0;
- (void)setRadius:(id)a0;
- (void)setReferenceFrame:(id)a0;
- (id)longitude;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLongitude:(id)a0;
- (void)setLatitude:(id)a0;
- (id)latitude;
- (id)calendarItemOwner;
- (id)address;
- (int)entityType;
- (id)description;
- (id)title;
- (id)referenceFrame;
- (void)setTitle:(id)a0;
- (id)semanticIdentifier;
- (id)radius;
- (void)setCalendarItemOwner:(id)a0;
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
