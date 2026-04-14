@interface EKPersistentLocation : EKPersistentObject

+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (id)referenceFrame;
- (void)setAddress:(id)a0;
- (id)radius;
- (id)address;
- (void)setLatitude:(id)a0;
- (void)setTitle:(id)a0;
- (id)calendarItemOwner;
- (void)setCalendarItemOwner:(id)a0;
- (void)setRadius:(id)a0;
- (id)description;
- (id)latitude;
- (void)setLongitude:(id)a0;
- (id)title;
- (void)setReferenceFrame:(id)a0;
- (id)longitude;
- (id)semanticIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
