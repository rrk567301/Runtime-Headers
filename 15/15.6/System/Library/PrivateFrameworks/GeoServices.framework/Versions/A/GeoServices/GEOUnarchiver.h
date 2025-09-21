@interface GEOUnarchiver : NSObject

+ (char)decompressBZip2DataAtURL:(id)a0 toURL:(id)a1 log:(id)a2 error:(id *)a3;
+ (char)decompressDataAtURL:(id)a0 toURL:(id)a1 log:(id)a2 error:(id *)a3;
+ (char)decompressGZipDataAtURL:(id)a0 toURL:(id)a1 log:(id)a2 error:(id *)a3;
+ (id)getContentsOfArchiveAtURL:(id)a0 log:(id)a1 error:(id *)a2;
+ (char)unarchiveData:(id)a0 toURL:(id)a1 log:(id)a2 error:(id *)a3;
+ (char)unarchiveDataAtURL:(id)a0 log:(id)a1 inMemoryDataSizeThreshold:(unsigned long long)a2 fileVisitor:(id /* block */)a3 error:(id *)a4;
+ (char)unarchiveDataAtURL:(id)a0 toURL:(id)a1 log:(id)a2 error:(id *)a3;

@end
