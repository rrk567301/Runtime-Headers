@class NSData;

@interface TSPReadOnlyMemoryDataStorage : TSPStreamDataStorage {
    NSData *_NSData;
}

- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (BOOL)readOnly;
- (BOOL)isReadable;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (id)initWithNSData:(id)a0;
- (id)NSDataWithOptions:(unsigned long long)a0;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;
- (BOOL)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;

@end
