@interface LACNVRAM : NSObject

+ (id)sharedInstance;

- (id)stringForKey:(id)a0;
- (BOOL)setString:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (unsigned int)unsignedIntForKey:(id)a0;
- (unsigned char)byteForKey:(id)a0;
- (unsigned long long)unsignedLongLongForKey:(id)a0;
- (id)dataForKey:(id)a0 nameSpace:(id)a1;

@end
