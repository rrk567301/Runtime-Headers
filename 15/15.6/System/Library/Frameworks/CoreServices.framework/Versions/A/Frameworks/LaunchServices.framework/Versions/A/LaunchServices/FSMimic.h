@class NSString, NSMutableDictionary, NSURL, NSMutableSet;

@interface FSMimic : NSObject <FSNodePropertyProviding, NSSecureCoding> {
    NSURL *_url;
    NSMutableDictionary *_baseProperties;
    NSMutableDictionary *_resourceValues;
    NSMutableSet *_relativePathsThatExist;
    unsigned int _hfsType;
    unsigned int _creator;
    struct { unsigned char HFSTypesSet : 1; unsigned char HFSTypesUnavailable : 1; } _flags;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char canIssueIO;
@property (readonly, nonatomic, getter=isDirectory) char directory;
@property (readonly, nonatomic, getter=isBusyDirectory) char busyDirectory;
@property (readonly, nonatomic, getter=isExecutableModeFile) char executableModeFile;
@property (readonly, nonatomic, getter=isExecutable) char executable;
@property (readonly, nonatomic, getter=isResolvable) char resolvable;
@property (readonly, nonatomic, getter=isSymbolicLink) char symbolicLink;
@property (readonly, nonatomic, getter=isAliasFile) char aliasFile;
@property (readonly, nonatomic, getter=isSideFault) char sideFault;
@property (readonly, nonatomic) char hasPackageBit;
@property (readonly, nonatomic, getter=isRegularFile) char regularFile;
@property (readonly, nonatomic, getter=isHidden) char hidden;
@property (readonly, nonatomic) char hasHiddenExtension;
@property (readonly, nonatomic, getter=isDataContainer) char dataContainer;
@property (readonly, nonatomic, getter=isVolume) char volume;
@property (readonly, nonatomic, getter=isMountTrigger) char mountTrigger;
@property (readonly, nonatomic, getter=isSecuredSystemContent) char securedSystemContent;
@property (readonly, nonatomic, getter=isOnDiskImage) char onDiskImage;
@property (readonly, nonatomic, getter=isOnLocalVolume) char onLocalVolume;
@property (readonly, nonatomic, getter=isOnTimeMachineVolume) char onTimeMachineVolume;
@property (readonly, getter=isInTrash) char inTrash;
@property (readonly, getter=isTrashFolder) char trashFolder;
@property (readonly, getter=isAVCHDCollection) char AVCHDCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basePropertyClasses;
+ (void)checkSelectors;
+ (id)resourceValueClassesWithNull;

- (void).cxx_destruct;
- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)askedForMissingResourceKey:(id)a0;
- (void)askedForMissingSelector:(SEL)a0;
- (id)canonicalPathWithError:(id *)a0;
- (char)childNodeWithRelativePathExists:(id)a0;
- (id)extensionWithError:(id *)a0;
- (char)getCachedResourceValueIfPresent:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (char)getContentModificationDate:(double *)a0 error:(id *)a1;
- (char)getCreationDate:(double *)a0 error:(id *)a1;
- (char)getDeviceNumber:(int *)a0 error:(id *)a1;
- (char)getDeviceRefNum:(unsigned long long *)a0 error:(id *)a1;
- (char)getFileIdentifier:(unsigned long long *)a0 error:(id *)a1;
- (char)getFileSystemRepresentation:(char[1024])a0 error:(id *)a1;
- (char)getHFSType:(unsigned int *)a0 creator:(unsigned int *)a1 error:(id *)a2;
- (char)getInodeNumber:(unsigned long long *)a0 error:(id *)a1;
- (char)getLength:(unsigned long long *)a0 error:(id *)a1;
- (char)getOwnerUID:(unsigned int *)a0 error:(id *)a1;
- (char)getResourceValue:(id *)a0 forKey:(id)a1 options:(unsigned char)a2 error:(id *)a3;
- (char)getVolumeIdentifier:(unsigned long long *)a0 error:(id *)a1;
- (char)hasObjectValueForSelector:(SEL)a0;
- (char)hasResourceValueForKey:(id)a0;
- (id)nameWithError:(id *)a0;
- (void)noteExtantChildNodeWithRelativePath:(id)a0;
- (id)pathWithError:(id *)a0;
- (void)setHFSType:(unsigned int)a0 creator:(unsigned int)a1;
- (void)setHFSTypesUnavailable;
- (void)setObjectValue:(id)a0 forSelector:(SEL)a1;
- (void)setResourceValue:(id)a0 forKey:(id)a1;
- (id)sideFaultResourceValuesWithError:(id *)a0;

@end
