@class NSString, MFSyncedSignatureContentsFile, NSData, WebArchive;

@interface MFSignature : NSObject <NSCopying> {
    NSString *_name;
    NSData *_webArchiveData;
    BOOL _isRich;
}

@property (readonly, nonatomic) BOOL isSavedAsRich;
@property (nonatomic) BOOL isDirty;
@property (readonly, copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isRich;
@property (readonly, nonatomic) MFSyncedSignatureContentsFile *syncedFile;
@property (readonly, copy, nonatomic) NSData *webArchiveData;
@property (copy, nonatomic) WebArchive *webArchive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithName:(id)a0;
- (id)dictionaryRepresentation;
- (void)reloadFromDisk;
- (id)initWithName:(id)a0 uniqueId:(id)a1;
- (void)_makeWebArchiveDataIfNeeded;
- (BOOL)saveContentToDisk;
- (void)removeContentFromDisk;

@end
