@class AFBBufferBuilder;

@interface _SDSDataLayoutBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct DataLayoutBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setFields:(id)a0;
- (void)setSize:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setNestedName:(id)a0;

@end
