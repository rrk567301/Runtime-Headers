@class NSURL, NSDictionary;

@interface SEMDictionaryLog : NSObject {
    NSURL *_logFileURL;
    NSDictionary *_log;
    int _protectionClass;
}

+ (void)initialize;

- (BOOL)isReadOnly;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (BOOL)clear:(id *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFilename:(id)a0 protectionClass:(int)a1 directory:(id)a2 readOnly:(BOOL)a3 create:(BOOL)a4 error:(id *)a5;
- (BOOL)writeUpdatedObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)writeUpdatedObjects:(id)a0 forKeys:(id)a1 error:(id *)a2;
- (BOOL)clearObjectForKey:(id)a0 error:(id *)a1;
- (id)mutableDictionaryForKey:(id)a0 error:(id *)a1;
- (BOOL)_loadLogOrCreate:(BOOL)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (id)initWithFilename:(id)a0 directory:(id)a1 readOnly:(BOOL)a2 error:(id *)a3;
- (BOOL)isEqualToDictionaryLog:(id)a0;

@end
