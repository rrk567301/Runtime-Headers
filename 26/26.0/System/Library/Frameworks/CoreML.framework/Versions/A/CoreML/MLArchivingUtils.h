@interface MLArchivingUtils : NSObject

+ (id)codedObjectURLFromOutputArchiver:(void *)a0;
+ (id)URLOfInputArchive:(void *)a0;
+ (BOOL)parseModelArchive:(void *)a0 modelType:(int *)a1 compilerVersion:(id *)a2 modelVersion:(id *)a3 error:(id *)a4;
+ (id)codedObjectURLFromInputArchiver:(void *)a0;

@end
