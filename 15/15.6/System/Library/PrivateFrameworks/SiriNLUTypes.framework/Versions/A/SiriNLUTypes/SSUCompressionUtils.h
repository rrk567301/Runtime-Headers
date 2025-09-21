@interface SSUCompressionUtils : NSObject

+ (id)SSUFileFromCompressedSSUFilePath:(id)a0 error:(id *)a1;
+ (char)_compressArchiveForData:(id)a0 outputFileURL:(id)a1 error:(id *)a2;
+ (id)_dataFromCompressedSSUFilePath:(id)a0 error:(id *)a1;
+ (char)compressArchiveForSSUFile:(id)a0 outputFileURL:(id)a1 error:(id *)a2;
+ (char)compressArchiveForSSUFileURL:(id)a0 outputFileURL:(id)a1 error:(id *)a2;
+ (char)decompressFromCompressedSSUFilePath:(id)a0 outputFileURL:(id)a1 error:(id *)a2;

@end
