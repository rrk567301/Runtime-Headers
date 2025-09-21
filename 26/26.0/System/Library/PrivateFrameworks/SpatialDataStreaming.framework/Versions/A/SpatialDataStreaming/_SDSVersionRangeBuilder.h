@class AFBBufferBuilder;

@interface _SDSVersionRangeBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct VersionRangeBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setMax:(id)a0;
- (void)setMin:(id)a0;

@end
