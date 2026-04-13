@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;

+ (Class)meltedClass;
+ (BOOL)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)uuid;
- (id)address;
- (id)title;
- (double)latitude;
- (double)longitude;
- (double)radius;
- (id)routeType;
- (id)mapKitHandle;
- (id)abURLString;
- (id)geoURLString;
- (id)remObjectID;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)a0 inChangeSet:(id)a1;
- (id)_structuredLocation;
- (id)radiusNumber;
- (id)updatedStructuredLocation;
- (id)updateParentToCommitSelf:(id)a0;

@end
