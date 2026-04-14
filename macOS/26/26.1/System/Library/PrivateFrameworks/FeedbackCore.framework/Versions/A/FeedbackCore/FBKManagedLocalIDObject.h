@class NSNumber;

@interface FBKManagedLocalIDObject : FBKManagedFeedbackObject

@property (copy) NSNumber *serverID;

+ (id)transformJSONArrayIntoLocalIDJSON:(id)a0 uniquingPrefix:(id)a1;
+ (id)transformJSONDictionaryIntoLocalIDJSON:(id)a0 uniquingPrefix:(id)a1;
+ (id)uniquingKey;

- (void)setID:(id)a0;
- (id)ID;
- (void)setPropertiesForLocalIDKeys:(id)a0;

@end
