@class NSString;

@interface GameSyncedDirectoryResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ directoryURL;
    void /* unknown type, empty encoding */ gameSavedDataFolderURL;
    void /* unknown type, empty encoding */ isOnline;
    void /* unknown type, empty encoding */ lastEditorDeviceName;
    void /* unknown type, empty encoding */ numberOfConflicts;
    void /* unknown type, empty encoding */ devices;
    void /* unknown type, empty encoding */ directorySandboxExtension;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
