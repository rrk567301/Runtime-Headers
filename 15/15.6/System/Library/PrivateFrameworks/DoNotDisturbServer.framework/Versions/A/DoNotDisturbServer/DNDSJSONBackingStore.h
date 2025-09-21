@class NSString, NSURL;
@protocol DNDSBackingStoreDelegate;

@interface DNDSJSONBackingStore : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStore> {
    Class _recordClass;
    NSURL *_fileURL;
    NSURL *_secureFileURL;
    unsigned long long _versionNumber;
    char _deviceOutOfSpace;
    unsigned long long _securityClass;
}

@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSBackingStoreDelegate> delegate;

+ (unsigned long long)dataWritingOptionsForSecurityClass:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRecordClass:(Class)a0 fileURL:(id)a1 secureFileURL:(id)a2 versionNumber:(unsigned long long)a3 securityClass:(unsigned long long)a4;
- (id)initWithRecordClass:(Class)a0 fileURL:(id)a1 versionNumber:(unsigned long long)a2;
- (id)readRecordDictionaryfromURL:(id)a0 withError:(id *)a1;
- (id)readRecordWithError:(id *)a0;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(char)a1;
- (id)sysdiagnoseDataIdentifier;
- (unsigned long long)writeRecord:(id)a0 error:(id *)a1;
- (unsigned long long)writeRecord:(id)a0 writePartition:(char)a1 error:(id *)a2;
- (unsigned long long)writeRecordDictionary:(id)a0 withSecurityClass:(unsigned long long)a1 toURL:(id)a2 error:(id *)a3;

@end
