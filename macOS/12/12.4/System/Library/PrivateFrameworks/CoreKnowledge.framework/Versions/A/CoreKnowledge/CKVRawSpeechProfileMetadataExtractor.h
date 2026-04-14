@interface CKVRawSpeechProfileMetadataExtractor : NSObject

+ (id)_extractUserDataFromRawSpeechProfileMetadata:(id)a0 error:(id *)a1;
+ (id)_extractEntityMetadataFromCategoryData:(id)a0 categoryName:(id)a1 error:(id *)a2;
+ (id)extractRawSpeechProfileMetadata:(id)a0 error:(id *)a1;

@end
