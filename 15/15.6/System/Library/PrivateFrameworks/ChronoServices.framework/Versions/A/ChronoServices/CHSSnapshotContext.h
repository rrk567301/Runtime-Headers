@class CHSScreenshotPresentationAttributes, NSString, NSFileManager, NSURL;

@interface CHSSnapshotContext : NSObject {
    char _usesCAPackage;
    char _checkedContentType;
    char _fileExists;
    char _checkedFileExists;
    NSFileManager *_fileManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fileManagerLock;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) CHSScreenshotPresentationAttributes *attributes;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) char needsCAPackage;
@property (readonly, nonatomic) char fileExists;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 attributes:(id)a1 fileManager:(id)a2;

@end
