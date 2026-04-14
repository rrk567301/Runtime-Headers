@class NSPrintInfo;

@interface NSPrintInfoDictionaryProxy : NSMutableDictionary {
    NSPrintInfo *_printInfo;
    int _purpose;
}

+ (id)_keysForPMKeys:(id)a0;
+ (id)_pmKeyForKey:(id)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)retain;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (id)keyEnumerator;
- (void)superRelease;
- (id)initWithPrintInfo:(id)a0 purpose:(int)a1;

@end
