@interface NSStoryboard : NSObject {
    id _privateStoryboardData;
}

@property (class, readonly) NSStoryboard *mainStoryboard;

+ (id)storyboardWithName:(id)a0 bundle:(id)a1;

- (void)dealloc;
- (id)name;
- (id)description;
- (id)debugDescription;
- (id)containingBundle;
- (id)storyboardFileName;
- (id)initWithBundle:(id)a0 storyboardFileName:(id)a1 identifierToNibNameMap:(id)a2 identifierToExternalStoryboardReferenceMap:(id)a3 identifierToUUIDMap:(id)a4 designatedEntryPointIdentifier:(id)a5 mainMenu:(id)a6;
- (id)initWithName:(id)a0 bundle:(id)a1;
- (void)_instantiateMainMenu:(id)a0;
- (id)nibForControllerWithIdentifier:(id)a0;
- (id)nibForStoryboardNibNamed:(id)a0;
- (BOOL)containsNibNamed:(id)a0;
- (id)_referencedStoryboardForExternalReferenceInfo:(id)a0;
- (id)uniqueIDForControllerIdentifier:(id)a0;
- (id)instantiateControllerReferencedByPlaceholderWithIdentifier:(id)a0;
- (id)instantiateControllerReferencedByPlaceholderWithIdentifier:(id)a0 storyboardSegueTemplate:(id)a1 sender:(id)a2;
- (id)instantiateControllerWithIdentifier:(id)a0 creator:(id /* block */)a1;
- (id)instantiateControllerWithIdentifier:(id)a0;
- (id)_instantiateControllerWithIdentifier:(id)a0 creator:(id /* block */)a1 storyboardSegueTemplate:(id)a2 sender:(id)a3;
- (id)instantiateInitialControllerWithCreator:(id /* block */)a0;
- (id)instantiateInitialController;
- (id)instantiateInitialControllerWithCreator:(id /* block */)a0 storyboardSegueTemplate:(id)a1 sender:(id)a2;
- (BOOL)_hasInitialController;
- (id)storyboardBundle;

@end
