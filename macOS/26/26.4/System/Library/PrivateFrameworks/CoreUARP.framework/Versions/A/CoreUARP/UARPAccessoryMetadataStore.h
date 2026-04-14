@class NSMutableDictionary, NSURL, NSData, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface UARPAccessoryMetadataStore : NSObject

@property (readonly) NSURL *metadataDirectoryURL;
@property (readonly) NSURL *tokenFileURL;
@property (copy) NSData *iCloudChangeToken;
@property (readonly) BOOL isReadOnly;
@property (readonly) NSMutableDictionary *metadataCache;
@property (readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly) NSObject<OS_os_log> *log;

- (id)initWithDirectory:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyiCloudToken;
- (id)accessoryMetadataURLForFileIndex:(unsigned long long)a0;
- (id)accessoryMetadataURLForRecordName:(id)a0;
- (BOOL)clearAllMetadata;
- (id)copyMetadataForRecordName:(id)a0;
- (unsigned long long)hashRecordNameToFileIndex:(id)a0;
- (id)loadMetadataFromPlist:(id)a0;
- (id)loadMetadataFromPlistForFileIndex:(unsigned long long)a0;
- (id)loadMetadataFromPlistForRecordName:(id)a0;
- (BOOL)loadMetadataStore:(id)a0;
- (BOOL)saveMetadataToPlist:(id)a0 fileIndex:(unsigned long long)a1;
- (void)updateCache:(id)a0 forKey:(id)a1;
- (BOOL)updateMetadata:(id)a0 deleteMetadata:(id)a1;
- (void)updateiCloudToken:(id)a0;

@end
