@interface TRIFBMutableBoxedDouble : TRIFBBoxedDouble {
    struct BoxedDouble { double x0; } *_ptr;
    BOOL _deleteWhenDone;
    BOOL _allowMutation;
}

@property (nonatomic) double val;

+ (id)new;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (const struct BoxedDouble { double x0; } *)cppPointer;
- (id)initWithVal:(double)a0;

@end
