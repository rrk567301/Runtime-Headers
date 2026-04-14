@class NSString, HKAttachmentStoreTaskConfiguration, NSMutableDictionary;

@interface HDAttachmentStoreServer : HDStandardTaskServer <HKAttachmentStoreServerInterface> {
    HKAttachmentStoreTaskConfiguration *_configuration;
    NSMutableDictionary *_openReadersByAttachment;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_addReferenceWithAttachment:(id)a0 toObjectWithIdentifier:(id)a1 metadata:(id)a2 completion:(id /* block */)a3;
- (void)remote_addAttachmentWithName:(id)a0 contentTypeIdentifier:(id)a1 fileHandle:(id)a2 toObjectWithIdentifier:(id)a3 attachmentMetadata:(id)a4 referenceMetadata:(id)a5 completion:(id /* block */)a6;
- (void)remote_removeAllReferencesWithAttachmentIdentifier:(id)a0 objectIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)remote_attachmentReferencesForObjectIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_streamDataForAttachment:(id)a0;
- (void)remote_getDataChunkForAttachment:(id)a0 chunkSize:(unsigned long long)a1 offset:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
