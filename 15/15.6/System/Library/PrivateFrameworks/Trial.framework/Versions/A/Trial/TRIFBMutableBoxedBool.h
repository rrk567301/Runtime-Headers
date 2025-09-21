@interface TRIFBMutableBoxedBool : TRIFBBoxedBool {
    struct BoxedBool { unsigned char x0; } *_ptr;
    char _deleteWhenDone;
    char _allowMutation;
}

@property (nonatomic) char val;

+ (id)new;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const struct BoxedBool { unsigned char x0; } *)cppPointer;
- (id)initWithVal:(char)a0;

@end
