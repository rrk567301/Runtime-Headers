@class AFBBufferBuilder;

@interface _SDSVersionBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct VersionBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setMajor:(unsigned short)a0;
- (void)setMinor:(unsigned short)a0;
- (void)setPatch:(unsigned short)a0;

@end
