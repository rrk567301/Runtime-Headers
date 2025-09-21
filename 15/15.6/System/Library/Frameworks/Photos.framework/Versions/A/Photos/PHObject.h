@class PHObjectReference, PHEntityKeyMap, NSString, PHPhotoLibrary, NSManagedObjectID;

@interface PHObject : NSObject <PHObject, PLLocalUUIDConverter, PHObjectFetchPropertySets, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyHintLock;
    unsigned long long _propertyHintLock_propertyHint;
}

@property (class, readonly) PHEntityKeyMap *entityKeyMap;

@property (readonly, nonatomic) PHObjectReference *objectReference;
@property (readonly) NSManagedObjectID *objectID;
@property (readonly) id identifier;
@property (readonly, getter=isDeleted) char deleted;
@property (readonly) unsigned long long propertyHint;
@property (readonly) NSString *uuid;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly, getter=isTransient) char transient;
@property (readonly) id userInterfaceIdentifier;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)managedObjectSupportsScreenshot;
+ (Class)propertySetClassForPropertySet:(id)a0;
+ (id)fetchPredicateForSharingFilter:(unsigned short)a0;
+ (void)assertAllObjects:(id)a0 forSelector:(SEL)a1 areOfType:(Class)a2;
+ (id)authorizationAwareFetchResultWithOptions:(id)a0 fetchBlock:(id /* block */)a1;
+ (id)entityKeyForPropertyKey:(id)a0;
+ (void)extendPropertiesToFetch:(id)a0 withProperties:(id)a1;
+ (void)extendPropertiesToFetch:(id)a0 withPropertySetClass:(Class)a1;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)identifierCodeFromLocalIdentifier:(id)a0;
+ (id)identifierPropertiesToFetch;
+ (id)internalSortDescriptorForPropertyKey:(id)a0 ascending:(char)a1;
+ (char)isValidCloudIdentifierStringValue:(id)a0;
+ (id)localIdentifierExpressionForFetchRequests;
+ (id)localIdentifierWithUUID:(id)a0;
+ (id)localIdentifiersWithUUIDs:(id)a0;
+ (id)managedEntityName;
+ (char)managedObjectSupportsAdjustments;
+ (char)managedObjectSupportsAllowedForAnalysis;
+ (char)managedObjectSupportsAssetStacks;
+ (char)managedObjectSupportsBodyDetection;
+ (char)managedObjectSupportsBursts;
+ (char)managedObjectSupportsContributor;
+ (char)managedObjectSupportsCreationType;
+ (char)managedObjectSupportsCustomUUIDKey;
+ (char)managedObjectSupportsDetectionType;
+ (char)managedObjectSupportsDuplicateVisibilityState;
+ (char)managedObjectSupportsFaceState;
+ (char)managedObjectSupportsHiddenState;
+ (char)managedObjectSupportsKeyFaces;
+ (char)managedObjectSupportsMontage;
+ (char)managedObjectSupportsPendingState;
+ (char)managedObjectSupportsPersonFilters;
+ (char)managedObjectSupportsRejectedState;
+ (char)managedObjectSupportsSavedAssetType;
+ (char)managedObjectSupportsShareExitingState;
+ (char)managedObjectSupportsShareExpiredState;
+ (char)managedObjectSupportsShareTrashedState;
+ (char)managedObjectSupportsSharingComposition;
+ (char)managedObjectSupportsTorsoOnly;
+ (char)managedObjectSupportsTrashedState;
+ (char)managedObjectSupportsVisibilityState;
+ (id)objectIDsMatchingEntityFromObjectIDs:(id)a0 context:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)a0;
+ (id)propertyKeyForEntityKey:(id)a0;
+ (id)propertySetAccessorsByPropertySet;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)uuidFromLocalIdentifier:(id)a0;
+ (id)uuidsFromLocalIdentifiers:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_shortObjectIDURI;
- (void)addFetchPropertyHint:(unsigned long long)a0;
- (void)assertRequiredFetchPropertyHints:(unsigned long long)a0;
- (Class)changeRequestClass;
- (void)fetchPropertySetsIfNeeded;
- (char)hasLoadedPropertySet:(id)a0;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
