@class NSNumber;

@interface FBKManagedFeedbackObject : NSManagedObject

@property (retain) NSNumber *ID;
@property (retain) NSNumber *remoteID;

+ (id)entityName;
+ (id)importFromJSONObject:(id)a0 intoContext:(id)a1;
+ (id)importFromJSONArray:(id)a0 intoContext:(id)a1;

- (id)entityName;
- (void)setPropertiesFromJSONObject:(id)a0;
- (BOOL)isEqualToFBKObject:(id)a0;

@end
