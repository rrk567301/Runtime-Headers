@class NSURL, NSString;

@interface HMDFileManager : HMFObject <HMDFileManager>

@property (readonly, copy) NSURL *heroFrameStoreDirectoryURL;
@property (readonly, copy) NSURL *legacyHeroFrameStoreDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bundleWithURL:(id)a0;
- (char)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(char)a1 attributes:(id)a2 error:(id *)a3;
- (id)dataWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)fileExistsAtPath:(id)a0;
- (char)removeItemAtURL:(id)a0 error:(id *)a1;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (id)contentsOfDirectoryAtURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (char)createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2;
- (char)fileExistsAtPath:(id)a0 isDirectory:(char *)a1;
- (id)fileHandleForReadingFromURL:(id)a0 error:(id *)a1;
- (char)isDeletableFileAtPath:(id)a0;
- (char)linkItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)fileExistsAtURL:(id)a0;
- (char)writeData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)JSONObjectWithURL:(id)a0 error:(id *)a1;
- (void)enumerateItemsAtURL:(id)a0 includingPropertiesForKeys:(id)a1 usingBlock:(id /* block */)a2;
- (char)unzipItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)writeDictionary:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)writeJSONObject:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)zipItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;

@end
