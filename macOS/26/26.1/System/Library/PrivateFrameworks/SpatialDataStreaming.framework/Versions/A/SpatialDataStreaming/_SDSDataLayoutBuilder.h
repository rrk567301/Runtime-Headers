@class AFBBufferBuilder;

@interface _SDSDataLayoutBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setFields:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setSize:(unsigned long long)a0;
- (id)init;
- (void)setNestedName:(id)a0;

@end
