@interface FSVolumeSupportedCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long capabilities;
@property (nonatomic) char supportsPersistentObjectIDs;
@property (nonatomic) char supportsSymbolicLinks;
@property (nonatomic) char supportsHardLinks;
@property (nonatomic) char supportsJournal;
@property (nonatomic) char supportsActiveJournal;
@property (nonatomic) char doesNotSupportRootTimes;
@property (nonatomic) char supportsSparseFiles;
@property (nonatomic) char supportsZeroRuns;
@property (nonatomic) char supportsFastStatFS;
@property (nonatomic) char supports2TBFiles;
@property (nonatomic) char supportsOpenDenyModes;
@property (nonatomic) char supportsHiddenFiles;
@property (nonatomic) char doesNotSupportVolumeSizes;
@property (nonatomic) char supports64BitObjectIDs;
@property (nonatomic) char supportsDocumentID;
@property (nonatomic) char doesNotSupportImmutableFiles;
@property (nonatomic) char doesNotSupportSettingFilePermissions;
@property (nonatomic) char supportsSharedSpace;
@property (nonatomic) char supportsVolumeGroups;
@property (nonatomic) long long caseFormat;

- (char)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
