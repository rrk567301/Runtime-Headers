@interface SHClusterImporterUtils : NSObject

+ (id)cachesDirectory;
+ (id)buildTemporaryClusterURLWithError:(id *)a0;
+ (char)clearTemporaryDatabaseFileAtURL:(id)a0 withError:(id *)a1;
+ (char)copyDatabaseFromURL:(id)a0 toDatabaseDestinationURL:(id)a1 error:(id *)a2;
+ (id)importerForFile:(id)a0;

@end
