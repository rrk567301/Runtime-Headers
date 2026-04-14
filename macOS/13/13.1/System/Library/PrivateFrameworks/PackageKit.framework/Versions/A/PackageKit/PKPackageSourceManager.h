@class NSRecursiveLock, NSMutableArray, NSMutableDictionary;

@interface PKPackageSourceManager : NSObject {
    NSMutableArray *_packageSources;
    NSMutableArray *_packageSourceDistances;
    NSMutableDictionary *_refToDistanceCache;
    NSMutableDictionary *_invalidatedPackageReferencesToReasonDict;
    NSRecursiveLock *_queryLock;
}

+ (id)defaultManager;
+ (id)_packageReferences:(id)a0 matchingIdentifier:(id)a1 version:(id)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)removeSource:(id)a0;
- (id)bestPackageReferenceMatchingIdentifier:(id)a0 version:(id)a1;
- (void)invalidatePackageReference:(id)a0 reason:(int)a1;
- (void)addSource:(id)a0 distance:(int)a1;
- (id)allPackageSources;
- (void)clearInvalidationList;
- (void)clearInvalidationListForReason:(int)a0;
- (void)clearInvalidationForIdentifier:(id)a0 version:(id)a1 forReason:(int)a2;
- (void)restoreFromCoder:(id)a0;
- (void)archiveToCoder:(id)a0;
- (id)_sortedPackageReferencesMatchingIdentifier:(id)a0 version:(id)a1;
- (id)_validSubsetOfPackageReferences:(id)a0;
- (id)_nearestPackageReference:(id)a0;
- (id)validPackageReferencesMatchingIdentifier:(id)a0 version:(id)a1;
- (int)distanceForPackageReference:(id)a0;

@end
