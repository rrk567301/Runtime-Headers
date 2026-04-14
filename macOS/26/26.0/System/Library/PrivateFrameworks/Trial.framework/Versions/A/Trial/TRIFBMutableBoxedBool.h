@interface TRIFBMutableBoxedBool : TRIFBBoxedBool {
    struct BoxedBool { unsigned char x0; } *_ptr;
    BOOL _deleteWhenDone;
    BOOL _allowMutation;
}

@property (nonatomic) BOOL val;

+ (id)new;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (const struct BoxedBool { unsigned char x0; } *)cppPointer;
- (id)initWithVal:(BOOL)a0;

@end
