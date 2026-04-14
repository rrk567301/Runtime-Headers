@class AFBBufferBuilder;

@interface _SDSVersionRangeBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct VersionRangeBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setMax:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setMin:(id)a0;

@end
