@interface CKVUserProfileTools : NSObject

+ (id)localeFromRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)parseRawSpeechProfileMetadata:(id)a0 error:(id *)a1;
+ (id)mapItemIdsToPriorsFromMetadata:(id)a0;
+ (id)vocabularyItemsOfType:(long long)a0 fromRawSpeechProfile:(id)a1 metadata:(id)a2 error:(id *)a3;

@end
