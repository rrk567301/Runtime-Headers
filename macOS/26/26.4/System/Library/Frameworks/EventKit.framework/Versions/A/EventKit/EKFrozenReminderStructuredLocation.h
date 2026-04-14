@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;

+ (Class)meltedClass;
+ (BOOL)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (double)radius;
- (double)latitude;
- (id)remObjectID;
- (double)longitude;
- (int)referenceFrame;
- (id)title;
- (id)address;
- (id)uuid;
- (id)mapKitHandle;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)a0 inChangeSet:(id)a1;
- (id)_structuredLocation;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)updateParentToCommitSelf:(id)a0;
- (id)updatedStructuredLocation;

@end
