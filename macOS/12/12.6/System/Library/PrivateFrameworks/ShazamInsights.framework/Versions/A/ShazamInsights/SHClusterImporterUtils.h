@interface SHClusterImporterUtils : NSObject

+ (id)cachesDirectory;
+ (id)randomTemporaryClusterURL;
+ (id)importerForFile:(id)a0;
+ (BOOL)clearTemporaryDatabaseFileAtURL:(id)a0 withError:(id *)a1;
+ (BOOL)copyDatabaseFromURL:(id)a0 toDatabaseDestinationURL:(id)a1 error:(id *)a2;

@end
