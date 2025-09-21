@class NSURL, NSDictionary;

@interface BMFileBackedDictionary : NSObject {
    NSURL *_fileURL;
    NSDictionary *_dictionary;
    int _protectionClass;
}

+ (id)new;

- (id)description;
- (id)init;
- (id)allKeys;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (char)isReadOnly;
- (char)clear:(id *)a0;
- (char)writeUpdatedObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)writeUpdatedObjects:(id)a0 forKeys:(id)a1 error:(id *)a2;
- (char)_loadDictionaryOrCreate:(char)a0 readOnly:(char)a1 initialDictionary:(id)a2 error:(id *)a3;
- (char)clearObjectForKey:(id)a0 error:(id *)a1;
- (id)initWithFilename:(id)a0 protectionClass:(int)a1 directory:(id)a2 readOnly:(char)a3 create:(char)a4 initialDictionary:(id)a5 error:(id *)a6;
- (id)mutableDictionaryForKey:(id)a0 error:(id *)a1;

@end
