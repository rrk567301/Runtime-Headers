@class NSURL;

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage {
    NSURL *_URL;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)readOnly;
- (void)performReadWithAccessor:(id /* block */)a0;
- (unsigned long long)materializedLength;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(char)a4 error:(id *)a5;

@end
