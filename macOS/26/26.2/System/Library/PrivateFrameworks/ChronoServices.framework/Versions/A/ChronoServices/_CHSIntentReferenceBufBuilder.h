@class AFBBufferBuilder;

@interface _CHSIntentReferenceBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct IntentReferenceBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setStableHash:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setIntentData:(id)a0;
- (void)setPartialIntentData:(id)a0;
- (void)setSchemaData:(id)a0;

@end
