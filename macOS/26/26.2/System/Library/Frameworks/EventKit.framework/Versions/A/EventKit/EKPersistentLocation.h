@interface EKPersistentLocation : EKPersistentObject

+ (Class)alternateUniverseClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (void)setLatitude:(id)a0;
- (id)radius;
- (void)setLongitude:(id)a0;
- (id)referenceFrame;
- (void)setCalendarItemOwner:(id)a0;
- (id)title;
- (id)latitude;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)semanticIdentifier;
- (id)longitude;
- (id)address;
- (void)setAddress:(id)a0;
- (int)entityType;
- (id)description;
- (void)setTitle:(id)a0;
- (void)setReferenceFrame:(id)a0;
- (id)calendarItemOwner;
- (void)setRadius:(id)a0;
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
