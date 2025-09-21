@class NSPrintInfo;

@interface NSPrintInfoDictionaryProxy : NSMutableDictionary {
    NSPrintInfo *_printInfo;
    int _purpose;
}

+ (id)_keysForPMKeys:(id)a0;
+ (id)_pmKeyForKey:(id)a0;

- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)retain;
- (void)removeObjectForKey:(id)a0;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (oneway void)release;
- (void)superRelease;
- (id)initWithPrintInfo:(id)a0 purpose:(int)a1;

@end
