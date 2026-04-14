@interface SHMediaItemPropertyUtilities : NSObject

+ (long long)categoryForShazamKitProperty:(id)a0;
+ (BOOL)isShazamKitDefinedMediaItemProperty:(id)a0;
+ (Class)jsonRepresentationTypeForProperty:(id)a0;
+ (Class)typeForShazamKitProperty:(id)a0;
+ (void)buildPropertySets;

@end
