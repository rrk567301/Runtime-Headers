@class NSArray, NSMutableDictionary;

@interface _SCRUIElementCache : NSObject {
    struct __AXUIElement { } *_axElementRef;
}

@property (retain, nonatomic) NSMutableDictionary *_attributeToValueCache;
@property (nonatomic) long long populationLevel;
@property (retain, nonatomic) NSArray *accessibilityRows;

+ (void)invalidateAll;
+ (id)cacheForAXUIElementRef:(struct __AXUIElement { } *)a0;
+ (id)allCachableAttributes;
+ (id)cacheForAXUIElementRef:(struct __AXUIElement { } *)a0 createIfNeeded:(BOOL)a1;
+ (id)_attributesForAllPopulationLevels;
+ (long long)_populationLevelMax;
+ (id)_attributesForPopulationLevel:(long long)a0;
+ (long long)_populationLevelForAttribute:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)valueForAttribute:(id)a0;
- (void)populateIfNeededLevel0;
- (id)canSetAttribute:(id)a0;
- (id)cachedAttributes;
- (id)initWithAXUIElementRef:(struct __AXUIElement { } *)a0;
- (void)_setCacheValue:(void *)a0 forAttribute:(id)a1;
- (void)_populateIfNeededLevel:(long long)a0;
- (void)_populateForAttributes:(id)a0;
- (void)populateIfNeededLevel1;
- (void)populateIfNeededLevel2;
- (void)populateIfNeededLevel3;

@end
