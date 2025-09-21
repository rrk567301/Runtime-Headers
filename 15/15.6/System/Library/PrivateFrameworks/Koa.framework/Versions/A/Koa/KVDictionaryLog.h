@class NSURL, NSDictionary;

@interface KVDictionaryLog : NSObject {
    NSURL *_logFileURL;
    NSDictionary *_log;
    int _protectionClass;
}

+ (void)initialize;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)allKeys;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (char)isReadOnly;
- (char)clear:(id *)a0;
- (id)initWithFilename:(id)a0 protectionClass:(int)a1 directory:(id)a2 readOnly:(char)a3 create:(char)a4 error:(id *)a5;
- (char)writeUpdatedObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)writeUpdatedObjects:(id)a0 forKeys:(id)a1 error:(id *)a2;
- (char)clearObjectForKey:(id)a0 error:(id *)a1;
- (id)mutableDictionaryForKey:(id)a0 error:(id *)a1;
- (char)_loadLogOrCreate:(char)a0 readOnly:(char)a1 error:(id *)a2;
- (id)initWithFilename:(id)a0 directory:(id)a1 readOnly:(char)a2 error:(id *)a3;
- (char)isEqualToDictionaryLog:(id)a0;

@end
