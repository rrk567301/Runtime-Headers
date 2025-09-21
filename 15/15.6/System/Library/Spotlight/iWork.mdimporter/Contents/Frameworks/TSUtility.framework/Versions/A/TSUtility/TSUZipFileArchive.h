@class TSUZipFileDescriptorWrapper, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface TSUZipFileArchive : TSUZipArchive {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    TSUZipFileDescriptorWrapper *_fdWrapper;
    NSURL *_temporaryDirectoryURL;
    NSURL *_URL;
}

+ (char)isZipArchiveAtFD:(int)a0;
+ (char)isZipArchiveAtURL:(id)a0 error:(id *)a1;
+ (void)readArchiveFromURL:(id)a0 options:(unsigned long long)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (id)zipArchiveFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (char)isZipSignatureAllZerosAtURL:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (char)isValid;
- (void).cxx_destruct;
- (id)URL;
- (unsigned long long)archiveLength;
- (char)copyToTemporaryLocationRelativeToURL:(id)a0 error:(id *)a1;
- (void)createTemporaryDirectoryRelativeToURL:(id)a0;
- (id)initForReadingFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithWriter:(id)a0 forReadingFromURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)newArchiveReadChannel;
- (char)openWithURL:(id)a0 error:(id *)a1;
- (void)removeTemporaryDirectory;
- (char)reopenWithTemporaryURL:(id)a0 error:(id *)a1;

@end
