@class NSString, NSArray, NSPredicate, NSManagedObjectContext;

@interface NSObjectController : NSController {
    id _content;
    id _objectHandler;
    id _managedProxy;
    struct __objectControllerFlags { unsigned char _editable : 1; unsigned char _automaticallyPreparesContent : 1; unsigned char _hasLoadedData : 1; unsigned char _explicitlyCannotAdd : 1; unsigned char _explicitlyCannotRemove : 1; unsigned char _isUsingManagedProxy : 1; unsigned char _hasFetched : 1; unsigned char _batches : 1; unsigned int _reservedObjectController : 24; } _objectControllerFlags;
    NSString *_objectClassName;
    Class _objectClass;
    NSArray *_contentObjectArray;
}

@property (retain) NSManagedObjectContext *managedObjectContext;
@property (copy) NSString *entityName;
@property (retain) NSPredicate *fetchPredicate;
@property char usesLazyFetching;
@property (retain) id content;
@property (readonly) id selection;
@property (readonly, copy) NSArray *selectedObjects;
@property char automaticallyPreparesContent;
@property Class objectClass;
@property (getter=isEditable) char editable;
@property (readonly) char canAdd;
@property (readonly) char canRemove;

+ (void)initialize;
+ (Class)_defaultObjectClass;
+ (id)_defaultObjectClassName;
+ (id)_keyValueBindingAccessPoints;
+ (id)_modelAndProxyKeys;
+ (id)_nonAutomaticObservingKeys;

- (id)description;
- (id)init;
- (void)addObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeObject:(id)a0;
- (void)_init;
- (void)remove:(id)a0;
- (id)_controllerKeys;
- (id)_fetchRequestForPerformingFetch;
- (void)_setExplicitlyCannotAdd:(char)a0 remove:(char)a1;
- (id)_singleMutableArrayValueForKey:(id)a0;
- (char)_canModifyManagedContent;
- (void)_changeEditable:(char)a0;
- (void)_dealloc;
- (void)_executeAdd:(id)a0 didCommitSuccessfully:(char)a1 actionSender:(id)a2;
- (void)_executeFetch:(id)a0 didCommitSuccessfully:(char)a1 actionSender:(id)a2;
- (char)_explicitlyCannotAdd;
- (char)_explicitlyCannotRemove;
- (void)_invokeSingleSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2;
- (char)_isManagedController;
- (char)_isUsingManagedProxy;
- (id)_lazyFetchResultProxyForObjects:(id)a0;
- (id)_managedProxy;
- (void)_markHasLoadedData:(char)a0;
- (char)_needsLiveUpdates;
- (void)_notifyEditorStateChanged:(char)a0;
- (void)_notifyManagedContextEditorStateChanged:(char)a0;
- (void)_notifyOfAnyContentChange;
- (id)_objectClassName;
- (id)_objectIDsFromManagedObjects:(id)a0;
- (char)_performFetchWithRequest:(id)a0 merge:(char)a1 error:(id *)a2;
- (void)_prepareContentWithNewObject:(id)a0;
- (void)_reactToMatchingInsertions:(id)a0 deletions:(id)a1 refreshed:(id)a2;
- (id)_relationshipKeyPathsForPrefetching;
- (void)_setObjectClassName:(id)a0;
- (void)_setObjectHandler:(id)a0;
- (void)_setSingleValue:(id)a0 forKey:(id)a1;
- (void)_setSingleValue:(id)a0 forKeyPath:(id)a1;
- (void)_setUsingManagedProxy:(char)a0;
- (id)_singleMutableArrayValueForKeyPath:(id)a0;
- (id)_singleValueForKey:(id)a0;
- (id)_singleValueForKeyPath:(id)a0;
- (char)_validateSingleValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (char)_validateSingleValue:(id *)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)add:(id)a0;
- (void)awakeFromNib;
- (id)defaultFetchRequest;
- (void)fetch:(id)a0;
- (char)fetchWithRequest:(id)a0 merge:(char)a1 error:(id *)a2;
- (id)initWithContent:(id)a0;
- (id)newObject;
- (void)prepareContent;
- (char)validateMenuItem:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;

@end
