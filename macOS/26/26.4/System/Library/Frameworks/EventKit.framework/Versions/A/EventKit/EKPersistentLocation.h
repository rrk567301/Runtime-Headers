@interface EKPersistentLocation : EKPersistentObject

+ (id)relations;
+ (Class)alternateUniverseClass;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)radius;
- (id)latitude;
- (void)setRadius:(id)a0;
- (void)setLongitude:(id)a0;
- (void)setTitle:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (id)longitude;
- (void)setLatitude:(id)a0;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)referenceFrame;
- (void)setAddress:(id)a0;
- (void)setReferenceFrame:(id)a0;
- (id)semanticIdentifier;
- (id)title;
- (id)address;
- (id)description;
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
