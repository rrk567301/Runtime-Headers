@interface SHCompression : NSObject

+ (int)supportedCompressionTypeFromFileURL:(id)a0;
+ (int)supportedCompressionTypeFromFilePathExtension:(id)a0;
+ (BOOL)decompressFile:(id)a0 withAlgorithm:(int)a1 toLocation:(id)a2 error:(id *)a3;

@end
