@class NSString, MFSyncedSignatureContentsFile, NSData, WebArchive;

@interface MFSignature : NSObject <NSCopying> {
    NSString *_name;
    NSData *_webArchiveData;
    char _isRich;
}

@property (readonly, nonatomic) char isSavedAsRich;
@property (nonatomic) char isDirty;
@property (readonly, copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char isRich;
@property (readonly, nonatomic) MFSyncedSignatureContentsFile *syncedFile;
@property (readonly, copy, nonatomic) NSData *webArchiveData;
@property (copy, nonatomic) WebArchive *webArchive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithName:(id)a0;
- (id)dictionaryRepresentation;
- (void)_makeWebArchiveDataIfNeeded;
- (id)initWithName:(id)a0 uniqueId:(id)a1;
- (void)reloadFromDisk;
- (void)removeContentFromDisk;
- (char)saveContentToDisk;

@end
