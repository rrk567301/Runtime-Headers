@class _TtC12VectorSearch19VSKAttributeWrapper;

@interface VSKAttribute : NSObject <NSCopying> {
    _TtC12VectorSearch19VSKAttributeWrapper *wrapper;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 columnType:(id)a1;
- (id)_getWrapper;

@end
