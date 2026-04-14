@class AFBBufferBuilder;

@interface _SDSSessionNewStreamAckBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct SessionNewStreamAckBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setName:(id)a0;

@end
