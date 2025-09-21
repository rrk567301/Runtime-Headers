@class NSArray, NSString, NSOrderedSet, PLPhotoLibrary, NSManagedObjectContext;

@interface PHChangeValidationController : NSObject {
    char _didPrepare;
}

@property (readonly, nonatomic) NSArray *renderedContentURLs;
@property (readonly, nonatomic) NSArray *assetsToChangeContent;
@property (readonly, nonatomic) NSArray *assetsToRevert;
@property (readonly, nonatomic) NSArray *assetsToHide;
@property (readonly, nonatomic) NSArray *assetsToDelete;
@property (readonly, nonatomic) NSArray *albumsToDelete;
@property (readonly, nonatomic) NSArray *foldersToDelete;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, nonatomic) char confirmationRequired;
@property (readonly, nonatomic) NSOrderedSet *insertRequests;
@property (readonly, nonatomic) NSOrderedSet *updateRequests;
@property (readonly, nonatomic) NSOrderedSet *deleteRequests;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)_prepare;
- (id)validate;
- (id)_failureWithError:(id)a0;
- (char)_promptForUserConfirmationWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3 extensionItem:(id)a4;
- (char)_recordObjectID:(id)a0 withSimpleDeleteValidators:(id)a1;
- (id)_simpleDeleteValidatorsWithManagedObjectContext:(id)a0;
- (id)_validateSimpleDeletionsWithValidators:(id)a0 requestsByObjectID:(id)a1;
- (id)initWithInsertRequests:(id)a0 updateRequests:(id)a1 deleteRequests:(id)a2 context:(id)a3 photoLibrary:(id)a4;
- (char)promptForUserConfirmationWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3;
- (char)promptForUserConfirmationWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3 previewAssetLocalIdentifiers:(id)a4;

@end
