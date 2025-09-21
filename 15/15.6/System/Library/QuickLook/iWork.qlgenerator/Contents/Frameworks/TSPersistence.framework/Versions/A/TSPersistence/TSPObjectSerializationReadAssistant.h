@class NSString, NSDictionary, TSPObjectContext, NSURL, TSPComponent;

@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {
    TSPObjectContext *_context;
    NSURL *_resourcesFolderURL;
    NSDictionary *_identifierToResourceNameDictionary;
    unsigned long long _readVersion;
    NSDictionary *_identifierToObjectUUIDDictionary;
    NSDictionary *_dataInfos;
    TSPComponent *_rootObjectComponent;
    char _deserializeAsPasteboard;
    char _resetObjectUUIDs;
    char _shouldDecodeMissingDataAsRemote;
}

@property (nonatomic) char isCrossDocumentPaste;
@property (nonatomic) char isCrossAppPaste;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) char hasDocumentVersionUUID;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (char)shouldDecodeMissingDataAsRemote;
- (id)cachedDataForIdentifier:(long long)a0;
- (id)cachedMetadataObject;
- (char)canResolveExternalReferences;
- (id)dataInfoForIdentifier:(long long)a0;
- (id)decodeObjectWithData:(id)a0 packageURL:(id)a1 options:(id)a2 error:(id *)a3;
- (char)isDecodingTransientObject;
- (id)metadataComponent;
- (long long)objectIdentifierForUUID:(id)a0;
- (id)objectUUIDForExternalReferenceToIdentifier:(long long)a0;
- (char)processMetadataObject:(id)a0 error:(id *)a1;
- (id)resourceURLForIdentifier:(long long)a0;
- (id)rootObjectComponent;
- (char)shouldResolveExternalReferencesUsingObjectUUID;

@end
