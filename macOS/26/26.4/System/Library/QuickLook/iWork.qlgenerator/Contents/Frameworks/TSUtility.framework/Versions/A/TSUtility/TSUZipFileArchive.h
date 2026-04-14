@class TSUZipFileDescriptorWrapper, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface TSUZipFileArchive : TSUZipArchive {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    TSUZipFileDescriptorWrapper *_fdWrapper;
    NSURL *_temporaryDirectoryURL;
    NSURL *_URL;
}

+ (BOOL)isZipArchiveAtFD:(int)a0;
+ (BOOL)isZipArchiveAtURL:(id)a0 error:(id *)a1;
+ (void)readArchiveFromURL:(id)a0 options:(unsigned long long)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (id)zipArchiveFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)isZipSignatureAllZerosAtURL:(id)a0;

- (id)debugDescription;
- (BOOL)isValid;
- (id)URL;
- (BOOL)openWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)archiveLength;
- (BOOL)copyToTemporaryLocationRelativeToURL:(id)a0 error:(id *)a1;
- (void)createTemporaryDirectoryRelativeToURL:(id)a0;
- (id)initForReadingFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithWriter:(id)a0 forReadingFromURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)newArchiveReadChannel;
- (void)removeTemporaryDirectory;
- (BOOL)reopenWithTemporaryURL:(id)a0 error:(id *)a1;

@end
