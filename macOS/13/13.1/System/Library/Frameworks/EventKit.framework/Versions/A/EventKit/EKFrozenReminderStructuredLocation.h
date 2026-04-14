@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;

+ (Class)meltedClass;
+ (id)uniqueIdentifierForREMObject:(id)a0;
+ (BOOL)canCommitSelf;

- (id)uuid;
- (id)address;
- (id)title;
- (double)latitude;
- (double)longitude;
- (int)referenceFrame;
- (double)radius;
- (id)mapKitHandle;
- (id)remObjectID;
- (id)_structuredLocation;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)updatedStructuredLocation;
- (id)updateParentToCommitSelf:(id)a0;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)a0 inChangeSet:(id)a1;

@end
