@class AFBBufferBuilder;

@interface _CHSWidgetRelevancePropertiesBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct WidgetRelevancePropertiesBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setExtensionIdentity:(id)a0;
- (void)setKind:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setIsDeletion:(BOOL)a0;
- (void)setLastRelevanceUpdate:(double)a0;
- (void)setRelevances:(id)a0;
- (void)setSupportsBackgroundRefresh:(BOOL)a0;

@end
