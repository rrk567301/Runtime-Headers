@class NSString, NSDictionary, NSURL, SKDisk;

@interface OSInstallOptions : NSObject

@property (retain) NSURL *baseSystemURL;
@property (retain) NSURL *appleDiagnosticsURL;
@property (retain) NSString *alternateBlessVolumePath;
@property (retain) SKDisk *dataTarget;
@property (retain) SKDisk *systemTarget;
@property (retain) NSString *baseSystemPath;
@property (retain) NSString *appleDiagnosticsPath;
@property long long installType;
@property char isIngenuine;
@property (retain) NSString *localizedProductName;
@property char shouldConvertToAPFS;
@property char isAppleInternal;
@property (retain) NSString *targetVolumeName;
@property char perpareForSealer;
@property (retain) NSDictionary *dictionaryRepresentation;

+ (char)isBeingInstalledInternally;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)_fileDiskURLForPath:(id)a0;
- (id)_mountPointForDiskWithUUID:(id)a0;
- (id)_pathFromFileDiskURL:(id)a0;

@end
