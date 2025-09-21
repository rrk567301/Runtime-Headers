@class NSMutableArray, NSString, NSDictionary, NSURL, SMSystem_Daemon, NSMutableSet, NSMutableDictionary;

@interface SMCollectIncompatibleApps : NSObject

@property (readonly) SMSystem_Daemon *system;
@property (readonly) NSDictionary *longTermSystemIdentifier;
@property (retain) NSURL *incompatibleAppsFolderUsed;
@property (retain) NSURL *listPath;
@property (retain) NSString *listName;
@property unsigned long long domain;
@property char shouldMoveFiles;
@property (retain) NSMutableSet *foundFiles;
@property (retain) NSMutableDictionary *appGroups;
@property (retain) NSMutableArray *foundAppGroups;
@property char update;
@property (retain) NSURL *alternateQuarantineFolderLocation;
@property (retain) NSURL *alternateListRoot;

- (void).cxx_destruct;
- (id)applicationData;
- (char)collect;
- (char)quarantineFiles;
- (id)findSafeQuarantinePath:(id)a0;
- (id)initWithList:(id)a0 useSystem:(id)a1 inDomain:(unsigned long long)a2 quarantine:(char)a3 isUpdate:(char)a4;
- (id)initWithListNamed:(id)a0 useSystem:(id)a1 inDomain:(unsigned long long)a2 quarantine:(char)a3 isUpdate:(char)a4;
- (id)initWithSystem:(id)a0 inDomain:(unsigned long long)a1 quarantine:(char)a2 isUpdate:(char)a3;
- (char)isPathInIncompatibleApplicationsList:(id)a0;
- (char)isPathIncompatible:(id)a0 dictionaryEntry:(id)a1;
- (id)listPathForListNamed:(id)a0;
- (id)loadIncompatibleAppList:(id)a0;
- (char)parseList;
- (char)removeGlimmerBlockerProxy;
- (char)sourcePathExists:(id)a0;

@end
