@interface PosterKitUtilities : NSObject

+ (id)configurationIdentityWithProvider:(id)a0 identifier:(id)a1 posterUUID:(id)a2 version:(unsigned long long)a3 supplement:(unsigned long long)a4 role:(long long)a5;
+ (BOOL)saveCompoundLayerStack:(id)a0 toWallpaperURL:(id)a1 error:(id *)a2;
+ (id)serverPathWithProviderURL:(id)a0 identity:(id)a1;

@end
