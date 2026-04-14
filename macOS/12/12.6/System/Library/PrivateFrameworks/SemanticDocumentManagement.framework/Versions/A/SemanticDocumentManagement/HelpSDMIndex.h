@class NSMutableDictionary;

@interface HelpSDMIndex : NSObject

@property (copy) NSMutableDictionary *attributes;
@property (readonly) NSMutableDictionary *indexData;

+ (id)HelpSDMIndexWithVersionedData:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)keyEnumerator;
- (id)archivedData;
- (void)setObject:(id)a0 forAttribute:(id)a1;
- (BOOL)containsToken:(id)a0;
- (id)initWithVersionedData:(id)a0;
- (BOOL)initWithArchivedDataDetail:(id)a0;
- (id)_descriptionStringFromDictionary:(id)a0 indentLevel:(int)a1;
- (void)setTokenCounts:(id)a0 andProperties:(id)a1 forKey:(id)a2;
- (id)versionedData;
- (id)fileProperitesForKey:(id)a0;
- (id)tokenCountsForKey:(id)a0;
- (unsigned long long)numberOfKeys;

@end
