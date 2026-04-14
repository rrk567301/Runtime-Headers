@interface FFSubscription : NSObject

+ (id)mergeSubscriptions:(id)a0;
+ (id)decodeFromDictionary:(id)a0;

- (id)init;
- (id)initPrivate;
- (BOOL)matchesFeature:(id)a0 inDomain:(id)a1 inConfiguration:(id)a2;
- (BOOL)matchesFeature:(id)a0 inDomain:(id)a1 inAlreadyLockedConfiguration:(id)a2;
- (id)encodeToDictionary;
- (id)nameOfClass;

@end
