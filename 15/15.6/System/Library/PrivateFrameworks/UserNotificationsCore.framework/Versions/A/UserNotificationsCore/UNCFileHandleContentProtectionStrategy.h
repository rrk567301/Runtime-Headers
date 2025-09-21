@class NSString, NSMutableDictionary;

@interface UNCFileHandleContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {
    char _excludeFromBackup;
    NSString *_fileProtectionType;
    NSMutableDictionary *_keyedFileHandles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)removeItemAtPath:(id)a0 error:(id *)a1;
- (id)allPaths;
- (char)_isFileProtectionTypeSupported:(id)a0;
- (void)_excludeItemFromBackupAtPath:(id)a0;
- (id)_fileHandleForCreatingStoreAtPath:(id)a0 protectionType:(id)a1;
- (id)allDataAtPath:(id)a0;
- (id)dataAtPath:(id)a0;
- (char)dataIsAvailableAtPath:(id)a0;
- (id)initWithFileProtectionType:(id)a0 excludeFromBackup:(char)a1;
- (void)migrateDataAtPath:(id)a0 toPath:(id)a1;
- (char)removeAllDataAtPath:(id)a0 error:(id *)a1;
- (char)writeData:(id)a0 atPath:(id)a1 error:(id *)a2;

@end
