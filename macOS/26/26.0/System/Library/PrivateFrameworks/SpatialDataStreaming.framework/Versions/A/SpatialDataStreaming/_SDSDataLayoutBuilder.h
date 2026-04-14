@class AFBBufferBuilder;

@interface _SDSDataLayoutBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setSize:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (void)setFields:(id)a0;
- (void).cxx_destruct;
- (void)setNestedName:(id)a0;

@end
