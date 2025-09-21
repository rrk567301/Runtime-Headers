@interface IASNVRAM : NSObject

+ (char)sync;
+ (char)forceSync;
+ (id)dataForKey:(id)a0 withNamespace:(id)a1;
+ (char)setString:(id)a0 forKey:(id)a1 withNamespace:(id)a2;
+ (id)stringForKey:(id)a0 withNamespace:(id)a1;
+ (char)setData:(id)a0 forKey:(id)a1 withNamespace:(id)a2;
+ (char)_setObject:(id)a0 forKey:(id)a1 withNamespace:(id)a2;

@end
