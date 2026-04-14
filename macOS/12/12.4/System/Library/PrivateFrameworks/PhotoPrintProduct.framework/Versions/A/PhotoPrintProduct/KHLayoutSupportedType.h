@class NSNumber;

@interface KHLayoutSupportedType : KHModel {
    NSNumber *_layoutId;
    NSNumber *_type;
}

- (void)dealloc;
- (id)type;
- (void)setType:(id)a0;
- (id)layoutId;
- (void)setLayoutId:(id)a0;
- (void)cacheLayoutId:(id)a0;
- (void)cacheType:(id)a0;

@end
