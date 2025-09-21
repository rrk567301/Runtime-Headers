@class NSDictionary, NSMutableDictionary, CalDefaultDictionary;

@interface CUIKObjectGroup : NSObject

@property (retain) NSDictionary *originalObjectMap;
@property (retain) NSMutableDictionary *objectMap;
@property (retain) CalDefaultDictionary *spawnedObjectIdentifiers;

+ (id)_identifierForObject:(id)a0;
+ (id)_objectMapForObjects:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithObjects:(id)a0;
- (id)objects;
- (id)objectIdentifiers;
- (id)originalObjects;
- (char)_newSeriesSpawnedWithObject:(id)a0;
- (void)newObject:(id)a0 spawnedFromObject:(id)a1;
- (char)objectsBelongInGroup:(id)a0;
- (id)shiftedOccurrencePreviouslySpawnedByIdentifier:(id)a0;

@end
