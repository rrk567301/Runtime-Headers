@class ICAccount, NSArray, NFFolder, NSMutableSet, NSMutableArray, ICVirtualSmartFolderItemIdentifier, ICCloudSyncingObject, ICFolder;

@interface ICMoveDecision : NSObject

@property (retain, nonatomic) NSMutableSet *filteredModernSourceObjects;
@property (retain, nonatomic) NSMutableArray *sanitizedFilteredModernSourceObjects;
@property (retain, nonatomic) NSMutableArray *ownedSharedRootObjectsInSource;
@property (retain, nonatomic) NSMutableArray *joinedSharedRootObjectsInSource;
@property (retain, nonatomic) NSMutableArray *readWriteSharedSubObjectsInSource;
@property (retain, nonatomic) NSMutableArray *readOnlySharedSubObjectsInSource;
@property (retain, nonatomic) NSMutableArray *lockedObjectsInSource;
@property (retain, nonatomic) NSMutableArray *unsupportedObjectsInSource;
@property (retain, nonatomic) NSArray *modernFoldersInSource;
@property (retain, nonatomic) NSMutableSet *accountsOfModernSourceObjects;
@property (retain, nonatomic) NSMutableSet *accountsOfHTMLSourceObjects;
@property (retain, nonatomic) NSMutableArray *privateModernNoteWithAttachmentsInSource;
@property (retain, nonatomic) NSMutableArray *sharedObjectsNotFromDestinationFolderInSource;
@property (retain, nonatomic) NSMutableArray *sharedObjectsInSource;
@property (retain, nonatomic) NSMutableArray *systemPaperNotesInSource;
@property (retain, nonatomic) NSMutableArray *nonSystemPaperNotesInSource;
@property (retain, nonatomic) NSMutableArray *mathNotesNotesInSource;
@property (retain, nonatomic) NSMutableArray *nonMathNotesNotesInSource;
@property (retain, nonatomic) NSMutableArray *callNotesInSource;
@property (retain, nonatomic) NSMutableArray *nonCallNotesInSource;
@property (nonatomic) char hasSharedObjectsNotFromDestinationAccountInSource;
@property (nonatomic) char hasLockedNotesNotFromDestinationAccountInSource;
@property (nonatomic) char hasSanitizedAndScreenedModernSourceObjects;
@property (nonatomic) char allowsManagedToUnmanagedMove;
@property (nonatomic) char allowsUnmanagedToManagedMove;
@property (retain, nonatomic) NSArray *modernNotes;
@property (retain, nonatomic) NSArray *htmlNotes;
@property (readonly, nonatomic) char shouldContinueDecisionMaking;
@property (readonly, nonatomic) NSArray *modernSourceObjects;
@property (readonly, nonatomic) NSArray *htmlSourceObjects;
@property (readonly, nonatomic) ICCloudSyncingObject *modernDestination;
@property (readonly, nonatomic) NFFolder *htmlDestinationFolder;
@property (readonly, nonatomic) ICVirtualSmartFolderItemIdentifier *virtualDestinationFolder;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long additionalStep;
@property (readonly, nonatomic) NSArray *guiltyObjects;
@property (readonly, nonatomic) char shouldMove;
@property (readonly, nonatomic) char shouldProceed;
@property (readonly, nonatomic) NSMutableArray *lockedObjectInSource;
@property (readonly, nonatomic) char hasLockedObjects;
@property (readonly, nonatomic) ICFolder *modernDestinationFolder;
@property (readonly, nonatomic) ICAccount *modernDestinationAccount;

+ (char)isValidModernDestinationObject:(id)a0;
+ (char)isValidHTMLDestinationObject:(id)a0;
+ (char)isValidHTMLSourceObject:(id)a0;
+ (char)isValidModernSourceObject:(id)a0;
+ (char)isValidVirtualDestinationObject:(id)a0;
+ (id)objectsForMakingDecisionForNonSharedFolder:(id)a0;
+ (char)shouldCopyThenDeleteWhenMovingObject:(id)a0 toNoteContainer:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)typeString;
- (void)_makeDecisionForMovingBetweenManagedAndUnmanagedAccounts;
- (void)_makeDecisionForMovingHTMLObjectsToHTMLDestination;
- (void)_makeDecisionForMovingHTMLObjectsToModernDestination;
- (void)_makeDecisionForMovingHTMLObjectsToVirtualDestination;
- (void)_makeDecisionForMovingModernObjectsToHTMLDestination;
- (void)_makeDecisionForMovingModernObjectsToModernDestination;
- (void)_makeDecisionForMovingModernObjectsToVirtualDestination;
- (void)_sanitizeAndScreenFilteredModernSourceObjectsIfNecessary;
- (void)_setDecisionWithType:(unsigned long long)a0 additionalStep:(unsigned long long)a1 guiltyObjects:(id)a2;
- (void)_setDecisionWithType:(unsigned long long)a0 guiltyObjects:(id)a1;
- (id)accountForObject:(id)a0;
- (id)htmlAccountForObject:(id)a0;
- (id)initWithSourceObjects:(id)a0 destination:(id)a1;
- (id)initWithSourceObjects:(id)a0 destination:(id)a1 allowsManagedToUnmanagedMove:(char)a2 allowsUnmanagedToManagedMove:(char)a3;

@end
