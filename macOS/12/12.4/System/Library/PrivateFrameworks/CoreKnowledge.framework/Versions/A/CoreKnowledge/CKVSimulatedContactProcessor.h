@class NSString;

@interface CKVSimulatedContactProcessor : NSObject <CKVSimulatedDatasetProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)targetItemType;
+ (id)targetDirectoryURL;
+ (id)targetOriginAppId;
+ (id)itemMapper;
+ (id)vocabularyItemFromDictionary:(id)a0;
+ (id)dictionaryFromVocabularyItem:(id)a0;


@end
