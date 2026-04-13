@class NSDictionary, NSMutableDictionary, CalDefaultDictionary;

@interface CUIKObjectGroup : NSObject

@property (retain) NSDictionary *originalObjectMap;
@property (retain) NSMutableDictionary *objectMap;
@property (retain) CalDefaultDictionary *spawnedObjectIdentifiers;

+ (id)_objectMapForObjects:(id)a0;
+ (id)_identifierForObject:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithObjects:(id)a0;
- (id)objects;
- (id)objectIdentifiers;
- (BOOL)_newSeriesSpawnedWithObject:(id)a0;
- (BOOL)objectsBelongInGroup:(id)a0;
- (void)newObject:(id)a0 spawnedFromObject:(id)a1;
- (id)shiftedOccurrencePreviouslySpawnedByIdentifier:(id)a0;
- (id)originalObjects;

@end
