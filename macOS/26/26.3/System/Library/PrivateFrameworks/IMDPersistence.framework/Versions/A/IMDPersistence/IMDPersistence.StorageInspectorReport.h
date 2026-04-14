@class NSString;

@interface IMDPersistence.StorageInspectorReport : NSObject {
    void /* unknown type, empty encoding */ databaseInspectionReport;
    void /* unknown type, empty encoding */ attachmentStorageInspectorReport;
    void /* unknown type, empty encoding */ exportableDatabaseRecordCountReport;
    void /* unknown type, empty encoding */ crossCheckReport;
    void /* unknown type, empty encoding */ reportDirectoryURL;
}

@property (nonatomic, readonly) NSString *description;

+ (id)createFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)encodeToData:(id *)a0;

@end
