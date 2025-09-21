@interface MFFileSystemPersistenceManager : NSObject

+ (void)removeAlternateFileForEmlxFile:(id)a0;
+ (id)_emlxPListInFile:(id)a0 url:(id)a1 plistOffset:(unsigned long long *)a2;
+ (char)updatePropertyListAtURL:(id)a0 propertyListBlock:(id /* block */)a1 outError:(id *)a2;
+ (char)writeAttachment:(id)a0 toDirectory:(id)a1 originalContentsURL:(id)a2 outError:(id *)a3;
+ (char)writeMimeData:(id)a0 toURL:(id)a1 isPart:(char)a2 propertyList:(id)a3 compress:(char)a4 outError:(id *)a5;

@end
