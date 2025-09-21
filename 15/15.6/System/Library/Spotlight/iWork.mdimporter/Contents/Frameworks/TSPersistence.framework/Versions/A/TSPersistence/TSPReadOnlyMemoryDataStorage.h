@class NSData;

@interface TSPReadOnlyMemoryDataStorage : TSPStreamDataStorage {
    NSData *_NSData;
}

- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (char)readOnly;
- (char)isReadable;
- (id)initWithNSData:(id)a0;
- (id)NSDataWithOptions:(unsigned long long)a0;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (char)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;
- (unsigned long long)materializedLength;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(char)a4 error:(id *)a5;

@end
