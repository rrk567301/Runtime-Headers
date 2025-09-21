@interface MTLTensorExtents : NSObject {
    struct { unsigned long long rank; unsigned long long extents[16]; } _private;
}

@property (readonly) unsigned long long rank;

- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)extentAtDimensionIndex:(unsigned long long)a0;
- (const unsigned long long *)extents;
- (id)initWithRank:(unsigned long long)a0 extents:(const long long *)a1;
- (id)initWithRank:(unsigned long long)a0 values:(const long long *)a1;
- (const struct { unsigned long long x0; unsigned long long x1[16]; } *)tensorExtentsInternal;

@end
