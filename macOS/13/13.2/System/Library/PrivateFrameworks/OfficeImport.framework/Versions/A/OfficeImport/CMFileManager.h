@interface CMFileManager : NSObject

+ (id)getTmpDirectory;
+ (id)uniqueFileName:(id)a0;
+ (unsigned long long)getFileTypeFromPath:(id)a0;
+ (unsigned long long)getFileTypeFromUTI:(id)a0;
+ (id)canonicalUrlPrefix:(id)a0;
+ (id)getUrlProtocol:(id)a0;

@end
