@class AFBBufferBuilder;

@interface _CHSWidgetRelevanceBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct WidgetRelevanceBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setIntentReference:(id)a0;
- (void)setAttributeKey:(id)a0;

@end
