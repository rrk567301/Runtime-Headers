@class NSURL, NSMutableDictionary;

@interface KVDictionaryLog : NSObject {
    NSURL *_logFileURL;
    NSMutableDictionary *_log;
    int _protectionClass;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (BOOL)clear;
- (id)initWithFilename:(id)a0 directory:(id)a1;
- (id)initWithFilename:(id)a0 directory:(id)a1 protectionClass:(int)a2;
- (id)mutableDictionaryForKey:(id)a0;
- (BOOL)writeUpdatedObject:(id)a0 forKey:(id)a1;
- (BOOL)writeUpdatedObjects:(id)a0 forKeys:(id)a1;

@end
