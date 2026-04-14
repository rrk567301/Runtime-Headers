@interface MILocation : NSObject

+ (id)URLForLocation:(id)a0 isAppBundle:(BOOL *)a1 error:(id *)a2;
+ (id)locationFromPlistDictionary:(id)a0 error:(id *)a1;
+ (id)plistDictionaryFromLocation:(id)a0;
+ (BOOL)validateURL:(id)a0 forLocation:(id)a1 error:(id *)a2;
+ (BOOL)validateWithURLonMac:(id)a0 forLocation:(id)a1 error:(id *)a2;
+ (id)volumeUUIDForLocation:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;

@end
