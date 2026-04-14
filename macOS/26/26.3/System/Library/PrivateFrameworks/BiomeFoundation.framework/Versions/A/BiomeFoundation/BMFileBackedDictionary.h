@class NSURL, NSDictionary;

@interface BMFileBackedDictionary : NSObject {
    NSURL *_fileURL;
    NSDictionary *_dictionary;
    int _protectionClass;
}

+ (id)new;

- (unsigned long long)count;
- (BOOL)isReadOnly;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)description;
- (id)init;
- (BOOL)clear:(id *)a0;
- (void).cxx_destruct;
- (BOOL)writeUpdatedObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)writeUpdatedObjects:(id)a0 forKeys:(id)a1 error:(id *)a2;
- (BOOL)_loadDictionaryOrCreate:(BOOL)a0 readOnly:(BOOL)a1 initialDictionary:(id)a2 error:(id *)a3;
- (BOOL)clearObjectForKey:(id)a0 error:(id *)a1;
- (id)initWithFilename:(id)a0 protectionClass:(int)a1 directory:(id)a2 readOnly:(BOOL)a3 create:(BOOL)a4 initialDictionary:(id)a5 error:(id *)a6;
- (id)mutableDictionaryForKey:(id)a0 error:(id *)a1;

@end
