@class NSData, NSString, CalManagedAlarm, CalManagedCalendarItem, NSManagedObjectID, NSDictionary, CalManagedEvent, NSNumber;

@interface CalManagedLocation : CalManagedObject <EKProtocolStructuredLocation>

@property (retain) NSString *abURLString;
@property (retain) NSString *geoURLString;
@property double radius;
@property (retain) NSString *title;
@property (retain) NSString *address;
@property (retain) NSString *displayName;
@property (retain) NSString *routeType;
@property (retain) NSString *uuid;
@property (retain) NSData *mapKitHandle;
@property (retain) CalManagedAlarm *alarm;
@property (retain) CalManagedEvent *eventForStartLocation;
@property (retain) CalManagedCalendarItem *itemForLocation;
@property (retain) CalManagedEvent *eventForEndLocation;
@property (readonly, copy, nonatomic) NSNumber *radiusNumber;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (void)addLocationPrefetchToCalendarItemFetch:(id)a0;
+ (void)adjustStructuredLocation:(id)a0 withNewLocation:(id)a1 createdLocationHandler:(id /* block */)a2 managedObjectContext:(id)a3;

- (void)awakeFromInsert;
- (id)_calLocation;
- (id)dataString;
- (void)setValuesFromData:(id)a0;
- (void)_importiCalendarStructuredLocation:(id)a0;
- (id)_ICSStructuredLocation;
- (void)importiCalendarProperty:(id)a0 inComponent:(id)a1 fromDocument:(id)a2 inCalendar:(id)a3;
- (id)_iCalendarElementWithOptions:(unsigned long long)a0;
- (id)enclosingSource;
- (void)updateWithLocation:(id)a0;
- (void)updateWithProtocolStructuredLocation:(id)a0;

@end
