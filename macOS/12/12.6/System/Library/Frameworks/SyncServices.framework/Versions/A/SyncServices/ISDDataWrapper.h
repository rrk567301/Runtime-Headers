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
+ (id)dataReferenceDirectory;
+ (void)deleteAllReferencesForClientWithId:(id)a0;
+ (void)setDataReferenceDirectory:(id)a0;
+ (id)dataWrapperWithData:(id)a0;
+ (id)dataReferencePathNamesWithExtension:(id)a0 prependSubdirs:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)length;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)signature;
- (void)setExtension:(id)a0;
- (id)extension;
- (id)_loadData;
- (void)setSignature:(id)a0;
- (id)propertyName;
- (id)guid;
- (void)setGuid:(id)a0;
- (id)dataWrapper;
- (void)setPropertyName:(id)a0;
- (id)recordId;
- (void)setRecordId:(id)a0;
- (id)loadData;
- (id)dataCache;
- (BOOL)deleteDataReference:(id *)a0;
- (BOOL)isd_isAttributeSelfConsistent;
- (id)initWithQuickDirtyCoder:(id)a0;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (int)isd_quickDirtyCoderType;
- (void)setPreviousExtension:(id)a0;
- (BOOL)backingStoreEqual:(id)a0;
- (id)previousExtension;
- (BOOL)swapPreviousBackingStore:(id)a0;
- (BOOL)saveDataReference:(id *)a0 withExtension:(id)a1;
- (BOOL)isd_isEqual:(id)a0;
- (id)initDataWrapperWithData:(id)a0;
- (id)_composePathToData:(id)a0;
- (id)_pathToData;
- (id)_pathToDataUsingPreviousExtension;
- (BOOL)_backingStoreExists;
- (id)dataReference;
- (id)isd_data;
- (id)_pathToDataDirectory;
- (void)setExtension:(id)a0 savePrevious:(BOOL)a1;
- (id)moddate;
- (void)setModdate:(id)a0;
- (BOOL)dataFaultFailure;
- (unsigned long long)_dataReferenceCount:(id)a0;
- (BOOL)_dataReferenceWasSaved;
- (BOOL)_isUpToDateWithData;
- (void)_updateWrapperWithData;

@end
