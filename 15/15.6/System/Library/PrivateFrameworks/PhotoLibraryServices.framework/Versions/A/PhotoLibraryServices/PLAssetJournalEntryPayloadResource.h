@class NSString, NSDictionary, NSData, PLManagedObjectJournalEntryPayload, PLUniformTypeIdentifier;

@interface PLAssetJournalEntryPayloadResource : NSObject <PLResourceIdentity> {
    PLManagedObjectJournalEntryPayload *_payload;
}

@property (readonly, nonatomic) unsigned long long cplType;
@property (readonly, nonatomic) unsigned short dataStoreClassID;
@property (readonly, nonatomic) NSString *uniformTypeIdentifierString;
@property (readonly, nonatomic) NSString *volumeUuidString;
@property (readonly, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) NSString *bookmarkPath;
@property (readonly, nonatomic) NSDictionary *payloadAttributes;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) unsigned int recipeID;
@property (readonly, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (readonly, nonatomic) char isOriginalResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_applyLargeVideoRecipeRefactorFixToExternalResource:(id)a0 withAsset:(id)a1;
+ (char)isValidForPersistenceWithRecipeID:(unsigned int)a0;

- (void).cxx_destruct;
- (char)isValidForPersistence;
- (short)trashedState;
- (void)appendToDescriptionBuilder:(id)a0;
- (id)fourCharCodeName;
- (id)initWithPayloadAttributes:(id)a0 payload:(id)a1;
- (char)isAdjusted;
- (char)isEqualToPayloadResource:(id)a0;
- (char)isPrimaryResource;
- (char)isReferenceResource;
- (void)mergePayloadResource:(id)a0 nilAttributes:(id)a1;
- (void)updateStoredResource:(id)a0;
- (id)validatedExternalResourceWithAsset:(id)a0 isCPLEnabled:(char)a1;

@end
