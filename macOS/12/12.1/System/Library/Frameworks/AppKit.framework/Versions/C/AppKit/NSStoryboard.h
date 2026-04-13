@interface NSStoryboard : NSObject {
    id _privateStoryboardData;
}

@property (class, readonly) NSStoryboard *mainStoryboard;

+ (id)storyboardWithName:(id)a0 bundle:(id)a1;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)name;
- (id)containingBundle;
- (void)_instantiateMainMenu:(id)a0;
- (BOOL)_hasInitialController;
- (id)instantiateInitialController;
- (id)_instantiateControllerWithIdentifier:(id)a0 creator:(id /* block */)a1 storyboardSegueTemplate:(id)a2 sender:(id)a3;
- (id)uniqueIDForControllerIdentifier:(id)a0;
- (BOOL)containsNibNamed:(id)a0;
- (id)nibForStoryboardNibNamed:(id)a0;
- (id)storyboardFileName;
- (id)initWithBundle:(id)a0 storyboardFileName:(id)a1 identifierToNibNameMap:(id)a2 identifierToExternalStoryboardReferenceMap:(id)a3 identifierToUUIDMap:(id)a4 designatedEntryPointIdentifier:(id)a5 mainMenu:(id)a6;
- (id)initWithName:(id)a0 bundle:(id)a1;
- (id)nibForControllerWithIdentifier:(id)a0;
- (id)storyboardBundle;
- (id)_referencedStoryboardForExternalReferenceInfo:(id)a0;
- (id)instantiateControllerReferencedByPlaceholderWithIdentifier:(id)a0 storyboardSegueTemplate:(id)a1 sender:(id)a2;
- (id)instantiateInitialControllerWithCreator:(id /* block */)a0 storyboardSegueTemplate:(id)a1 sender:(id)a2;
- (id)instantiateControllerWithIdentifier:(id)a0 creator:(id /* block */)a1;
- (id)instantiateInitialControllerWithCreator:(id /* block */)a0;
- (id)instantiateControllerReferencedByPlaceholderWithIdentifier:(id)a0;
- (id)instantiateControllerWithIdentifier:(id)a0;

@end
