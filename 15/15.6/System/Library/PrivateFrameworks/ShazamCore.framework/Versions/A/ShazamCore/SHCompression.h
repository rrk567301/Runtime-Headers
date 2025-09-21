@interface SHCompression : NSObject

+ (char)decompressAppleArchiveAtURL:(id)a0 toDirectoryURL:(id)a1 error:(id *)a2;
+ (char)decompressFile:(id)a0 withAlgorithm:(int)a1 toLocation:(id)a2 error:(id *)a3;
+ (int)supportedCompressionTypeFromFilePathExtension:(id)a0;
+ (int)supportedCompressionTypeFromFileURL:(id)a0;

@end
