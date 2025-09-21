@class NSString, NSMutableDictionary, SEMDictionaryLog;

@interface SEMIndexInfo : NSObject {
    SEMDictionaryLog *_log;
    NSString *_description;
    NSMutableDictionary *_pending;
    BOOL _clear;
}

+ (id)readOnlyIndexInfoAtDirectory:(id)a0 logFilename:(id)a1;
+ (id)writableIndexInfoAtDirectory:(id)a0 logFilename:(id)a1 error:(id *)a2;

- (void)clear;
- (BOOL)commitUpdates:(id *)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)rollbackUpdates;
- (void)_createPendingLog;
- (id)initWithIndexDirectory:(id)a0 logFilename:(id)a1 readOnly:(BOOL)a2 error:(id *)a3;

@end
