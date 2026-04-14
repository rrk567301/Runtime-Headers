@class _TtC12VectorSearch19VSKAttributeWrapper;

@interface VSKAttribute : NSObject <NSCopying> {
    _TtC12VectorSearch19VSKAttributeWrapper *wrapper;
}

- (id)getName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 columnType:(id)a1;
- (id)_getWrapper;

@end
