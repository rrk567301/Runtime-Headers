@interface IMSIconLoader : NSObject

+ (void)decodeData:(id)a0 privateKey:(struct __SecKey { } *)a1 withCompletionHandler:(id /* block */)a2;
+ (id)get_icon_data:(unsigned long long *)a0 size:(unsigned long long)a1;
+ (struct __SecKey { } *)restoreIcon:(id)a0 isPublic:(BOOL)a1;
+ (void)tryLoadIconData:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
