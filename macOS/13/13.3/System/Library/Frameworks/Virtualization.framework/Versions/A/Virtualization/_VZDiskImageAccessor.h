@interface _VZDiskImageAccessor : NSObject {
    struct unique_ptr<Storage::DiskImage, std::default_delete<Storage::DiskImage>> { struct __compressed_pair<Storage::DiskImage *, std::default_delete<Storage::DiskImage>> { struct DiskImage *__value_; } __ptr_; } _diskImage;
}

@property (readonly) unsigned long long size;
@property (readonly) unsigned long long optimalBlockSize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)readDataAtOffset:(unsigned long long)a0 length:(unsigned long long)a1 error:(id *)a2;

@end
