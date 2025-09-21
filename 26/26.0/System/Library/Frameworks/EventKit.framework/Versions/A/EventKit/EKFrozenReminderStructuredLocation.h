@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;

+ (Class)meltedClass;
+ (BOOL)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)remObjectID;
- (double)longitude;
- (double)latitude;
- (id)address;
- (id)title;
- (int)referenceFrame;
- (id)uuid;
- (double)radius;
- (id)mapKitHandle;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)a0 inChangeSet:(id)a1;
- (id)_structuredLocation;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)updateParentToCommitSelf:(id)a0;
- (id)updatedStructuredLocation;

@end
