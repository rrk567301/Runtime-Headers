@class AFBBufferBuilder;

@interface _SDSSessionNewStreamAckBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct SessionNewStreamAckBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setName:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
