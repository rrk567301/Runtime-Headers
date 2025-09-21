@class NSString, NSDictionary, NSNumber;

@interface DMFilesystemPrivVars : NSObject {
    NSString *_fsPersonality;
    NSString *_contentMask;
    NSString *_fsType;
    char _serverOnly;
    NSString *_fsUnlocalizedName;
    NSString *_fsLocalizedName;
    NSString *_fsUnlocalizedEncryptionName;
    NSString *_fsLocalizedEncryptionName;
    NSString *_bundlePath;
    NSDictionary *_fsDictionary;
    NSNumber *_minimumSize;
    NSNumber *_maximumSize;
    NSString *_verifyExecutable;
    NSString *_verifyArgs;
    NSString *_liveVerifyArgs;
    NSString *_verifyRepairOutputXMLArgs;
    NSString *_repairExecutable;
    NSString *_repairArgs;
    NSString *_verifyRepairOutputLocale;
    char _shouldBeUserFormattable;
    NSString *_formatExecutable;
    NSString *_formatArgs;
    char _volumeNameIsCasePreserving;
    char _volumeNameIsCaseSensitive;
    char _fileObjectsAreCasePreserving;
    char _fileObjectsAreCaseSensitive;
}

@end
