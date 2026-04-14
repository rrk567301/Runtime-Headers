@interface _NS128bitWrapper : NSObject <NSCopying> {
    struct _double_quad_uint { unsigned long long high64; unsigned long long low64; } bits;
}

- (id)description;
- (long long)compare:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
