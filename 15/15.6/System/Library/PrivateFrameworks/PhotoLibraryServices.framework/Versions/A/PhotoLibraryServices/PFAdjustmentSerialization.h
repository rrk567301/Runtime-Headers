@interface PFAdjustmentSerialization : NSObject

+ (id)deserializeAdjustmentsFromData:(id)a0 error:(id *)a1;
+ (id)deserializeDictionaryFromData:(id)a0 error:(id *)a1;
+ (id)serializeAdjustments:(id)a0 error:(id *)a1;
+ (id)serializeDictionary:(id)a0 error:(id *)a1;
+ (char)validateArchive:(id)a0 containsEntryWithKey:(id)a1 ofType:(Class)a2 errors:(id)a3;
+ (char)validateValue:(id)a0 isOfType:(Class)a1 errors:(id)a2;

@end
