@interface PFAppleArchive : PFAppleArchiveStream {
    struct AAArchiveStream_impl { } *_archiveStream;
}

- (void)dealloc;
- (char)close:(id *)a0;
- (char)openForReading:(id *)a0;
- (char)openForWriting:(id *)a0;
- (char)decodeContentOfDirectoryWithError:(id *)a0;
- (char)decodeContentsToDirectoryURL:(id)a0 error:(id *)a1;
- (char)decodeData:(id *)a0 filename:(id *)a1 error:(id *)a2;
- (char)encodeContentOfDirectoryAtURL:(id)a0 entryPredicate:(id /* block */)a1 error:(id *)a2;
- (char)encodeData:(id)a0 filename:(id)a1 error:(id *)a2;

@end
