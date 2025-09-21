@interface OSPNVRAM : NSObject

+ (id)sharedInstance;

- (char)boolForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (char)setData:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (char)setString:(id)a0 forKey:(id)a1;
- (unsigned char)byteForKey:(id)a0;
- (unsigned int)unsignedIntForKey:(id)a0;
- (unsigned long long)unsignedLongLongForKey:(id)a0;
- (char)boolForKey:(id)a0 namespace:(id)a1;
- (unsigned char)byteForKey:(id)a0 namespace:(id)a1;
- (id)dataForKey:(id)a0 namespace:(id)a1;
- (char)setData:(id)a0 forKey:(id)a1 namespace:(id)a2;
- (char)setString:(id)a0 forKey:(id)a1 namespace:(id)a2;
- (id)stringForKey:(id)a0 namespace:(id)a1;
- (unsigned int)unsignedIntForKey:(id)a0 namespace:(id)a1;
- (unsigned long long)unsignedLongLongForKey:(id)a0 namespace:(id)a1;

@end
