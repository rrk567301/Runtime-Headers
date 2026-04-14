@interface RMJSONUtilities : NSObject

+ (BOOL)serializeJSONDictionary:(id)a0 fileURL:(id)a1 error:(id *)a2;
+ (id)deserializeJSONDictionaryAtFileURL:(id)a0 error:(id *)a1;

@end
