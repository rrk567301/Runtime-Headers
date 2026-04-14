@interface CKDPackageManifest : NSObject

+ (id)packageWithContentsOfFile:(id)a0 error:(id *)a1;
+ (BOOL)readContentsOfFile:(id)a0 intoPackage:(id)a1 error:(id *)a2;
+ (BOOL)writePackage:(id)a0 toFile:(id)a1 error:(id *)a2;

@end
