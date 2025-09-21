@class PFCloudKitMetadataCache, NSString, NSMutableDictionary, NSCloudKitMirroringDelegateOptions, CKRecordZone, NSObject, NSMutableArray;
@protocol PFCloudKitSerializerDelegate;

@interface PFCloudKitSerializer : NSObject {
    NSMutableDictionary *_manyToManyRecordNameToRecord;
    NSString *_recordNamePrefix;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSObject<PFCloudKitSerializerDelegate> *_delegate;
    NSMutableArray *_writtenAssetURLs;
    PFCloudKitMetadataCache *_metadataCache;
    CKRecordZone *_recordZone;
}

+ (id)defaultRecordZoneIDForDatabaseScope:(long long)a0;
+ (void)_invalidateStaticCaches;
+ (void)initialize;

- (id)initWithMirroringOptions:(id)a0 metadataCache:(id)a1 recordNamePrefix:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
