@interface CalStructuredDataArchiver : NSObject

+ (id)_permittedClassesForArchiving;
+ (id)unarchiveDictionaryFromData:(id)a0 error:(id *)a1;
+ (id)archiveDictionary:(id)a0 error:(id *)a1;

@end
