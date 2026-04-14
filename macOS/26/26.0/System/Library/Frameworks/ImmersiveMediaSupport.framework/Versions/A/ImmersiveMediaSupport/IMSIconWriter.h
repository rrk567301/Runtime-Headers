@interface IMSIconWriter : NSObject

+ (id)get_icon_data:(unsigned long long *)a0 size:(unsigned long long)a1;
+ (id)ims_loadIcon_errorWithCode:(long long)a0 errorDescription:(id)a1;
+ (void)tryWritingIconData:(id /* block */)a0;

@end
