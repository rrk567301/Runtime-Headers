@class NSString, NSData, NSDate, NSNumber;

@interface ISDDataWrapper : NSObject <NSCoding> {
    NSString *_guid;
    NSString *_extension;
    NSDate *_moddate;
    NSData *_signature;
    NSNumber *_length;
    unsigned int _hash;
    NSString *_subdir;
    NSData *_dataCache;
    NSString *_recordId;
    NSString *_propertyName;
    BOOL _faultFailure;
    NSString *_previousExtension;
}

+ (void)initialize;
+ (id)dataWrapperWithData:(id)a0;
+ (id)dataReferenceDirectory;
+ (void)setDataReferenceDirectory:(id)a0;
+ (id)dataReferencePathNamesWithExtension:(id)a0 prependSubdirs:(BOOL)a1;
+ (void)deleteAllReferencesForClientWithId:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)signature;
- (id)extension;
- (void)setExtension:(id)a0;
- (id)loadData;
- (void)setSignature:(id)a0;
- (id)propertyName;
- (void)setGuid:(id)a0;
- (id)guid;
- (id)dataWrapper;
- (void)setPropertyName:(id)a0;
- (id)recordId;
- (void)setRecordId:(id)a0;
- (id)dataCache;
- (id)_loadData;
- (id)initWithQuickDirtyCoder:(id)a0;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (int)isd_quickDirtyCoderType;
- (BOOL)isd_isEqual:(id)a0;
- (BOOL)isd_isAttributeSelfConsistent;
- (id)dataReference;
- (id)isd_data;
- (BOOL)_backingStoreExists;
- (BOOL)swapPreviousBackingStore:(id)a0;
- (BOOL)saveDataReference:(id *)a0 withExtension:(id)a1;
- (BOOL)deleteDataReference:(id *)a0;
- (void)setPreviousExtension:(id)a0;
- (void)setExtension:(id)a0 savePrevious:(BOOL)a1;
- (id)previousExtension;
- (id)moddate;
- (void)setModdate:(id)a0;
- (BOOL)dataFaultFailure;
- (id)_pathToDataDirectory;
- (id)_composePathToData:(id)a0;
- (id)_pathToData;
- (BOOL)backingStoreEqual:(id)a0;
- (id)_pathToDataUsingPreviousExtension;
- (unsigned long long)_dataReferenceCount:(id)a0;
- (BOOL)_dataReferenceWasSaved;
- (id)initDataWrapperWithData:(id)a0;
- (BOOL)_isUpToDateWithData;
- (void)_updateWrapperWithData;

@end
