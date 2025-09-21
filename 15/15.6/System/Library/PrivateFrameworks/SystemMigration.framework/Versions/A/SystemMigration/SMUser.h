@class NSString, NSArray, SMSystem, NSImage, NSURL, NSNumber;

@interface SMUser : NSObject {
    NSString *_shortNameForImport;
    NSString *_longNameForImport;
}

@property unsigned int uid;
@property unsigned int gid;
@property (retain) NSString *UUID;
@property (readonly) SMSystem *sourceSystem;
@property char dontNeedToCopyUserHome;
@property char homeDirIsRedirected;
@property char homeDirToBeCopiedByMigration;
@property char homeDirToBeSymlinkedByMigration;
@property (retain) NSString *name;
@property (retain) NSString *iCloudName;
@property (retain) NSArray *iCloudNames;
@property (retain) NSArray *iCloudIdentifiers;
@property (retain) NSString *fullName;
@property (retain) NSImage *accountPicture;
@property (readonly) NSURL *relativeHomeDir;
@property char fdeSigned;
@property char filevault;
@property char portableHomeUser;
@property (readonly) char isAdminUser;
@property (readonly) char isRoleUser;
@property (readonly) char isRoot;
@property (readonly) NSNumber *homeDirSize;
@property char needsAttention;
@property char allowOverwriteOfConflictedShortName;
@property char shouldOverwriteConflictedShortName;
@property char shouldPreserveConflictedHomeDirectory;
@property (readonly) unsigned long long userConflictState;
@property unsigned long long userConflictResolutionOptions;
@property char isConflictingWithAnAdmin;
@property (retain) NSString *shortNameForImport;
@property (readonly) char shortNameHasConflict;
@property (readonly) char shortNameHasConflictWithOtherShortName;
@property (retain) NSString *longNameForImport;
@property (readonly) char longNameHasConflict;

+ (id)keyPathsForValuesAffectingShouldPreserveConflictedHomeDirectory;
+ (id)keyPathsForValuesAffectingAllowOverwriteOfConflictedShortName;
+ (id)keyPathsForValuesAffectingLongNameHasConflict;
+ (id)keyPathsForValuesAffectingShortNameHasConflict;
+ (id)keyPathsForValuesAffectingShouldOverwriteConflictedShortName;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isMigratable;
- (id)sizeForSubPath:(id)a0;
- (void)resetNamesForImport;
- (id)sanitizedLoginStringForComparison:(id)a0;
- (id)stringForUserConflictState:(unsigned long long)a0;
- (void)updateConflictStateForSystem:(id)a0 consideringOtherUsers:(id)a1;

@end
