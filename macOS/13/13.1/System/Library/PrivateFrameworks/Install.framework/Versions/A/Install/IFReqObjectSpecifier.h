@class NSString;

@interface IFReqObjectSpecifier : NSObject {
    NSString *_type;
    id _argument;
    id _property;
    id _identifier;
}

+ (id)_supportedTypes;
+ (id)objectValueWithSysCtlName:(id)a0;
+ (id)objectValueWithIORegistryPath:(id)a0;
+ (id)objectValueWithGestaltSelector:(id)a0;
+ (id)objectValueWithFilePath:(id)a0;
+ (id)objectValueWithBundlePath:(id)a0;
+ (id)objectValueWithPlistFilePath:(id)a0;
+ (id)objectValueWithPackageIdentifier:(id)a0;
+ (id)_supportedFileSystemTypes;
+ (SEL)_selectorForType:(id)a0;
+ (id)specifierWithType:(id)a0 argument:(id)a1 property:(id)a2 andIdentifier:(id)a3;
+ (id)_pathFromPossiblyTokenizedPath:(id)a0 onTarget:(id)a1 withIdentifier:(id)a2;
+ (id)_objectByEvaluatingPropertyList:(id)a0 keyPath:(id)a1;
+ (short)_vRefNumForPath:(id)a0;
+ (id)_vRefNumbersForTarget:(id)a0;
+ (id)_findFolderUsingSharedRequirementsContext:(id)a0 onTarget:(id)a1;
+ (id)_childrenPathsOfPath:(id)a0 plane:(id)a1;
+ (id)_allDecodedPaths:(id)a0 plane:(id)a1;

- (void)dealloc;
- (id)description;
- (id)type;
- (id)argument;
- (BOOL)isPathBased;
- (id)initWithType:(id)a0 argument:(id)a1 property:(id)a2 andIdentifier:(id)a3;
- (id)objectValueForTarget:(id)a0;

@end
