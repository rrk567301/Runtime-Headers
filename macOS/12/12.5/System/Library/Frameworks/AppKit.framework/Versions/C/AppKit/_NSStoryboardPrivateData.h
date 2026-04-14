@class NSString, NSBundle, NSDictionary, NSMutableDictionary, NSArray;

@interface _NSStoryboardPrivateData : NSObject {
    NSBundle *bundle;
    NSString *storyboardFileName;
    NSDictionary *identifierToNibNameMap;
    NSDictionary *identifierToExternalStoryboardReferenceMap;
    NSDictionary *identifierToUUIDMap;
    NSString *designatedEntryPointIdentifier;
    NSMutableDictionary *identifierToUINibMap;
    NSString *mainMenu;
    NSArray *topLevelObjects;
    NSBundle *ownerBundle;
}

- (void)dealloc;

@end
