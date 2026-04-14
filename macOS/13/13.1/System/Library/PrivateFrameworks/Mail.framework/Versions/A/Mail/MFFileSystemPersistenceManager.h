@interface MFFileSystemPersistenceManager : NSObject

+ (BOOL)writeMimeData:(id)a0 toURL:(id)a1 isPart:(BOOL)a2 propertyList:(id)a3 compress:(BOOL)a4 outError:(id *)a5;
+ (BOOL)writeAttachment:(id)a0 toDirectory:(id)a1 originalContentsURL:(id)a2 outError:(id *)a3;
+ (BOOL)updatePropertyListAtURL:(id)a0 propertyListBlock:(id /* block */)a1 outError:(id *)a2;
+ (id)_emlxPListInFile:(id)a0 url:(id)a1 plistOffset:(unsigned long long *)a2;
+ (void)removeAlternateFileForEmlxFile:(id)a0;

@end
