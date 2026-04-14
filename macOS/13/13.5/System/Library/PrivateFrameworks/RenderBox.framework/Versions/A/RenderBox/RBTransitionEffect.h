@interface RBTransitionEffect : NSObject {
    struct Effect { unsigned char type; unsigned char events; unsigned char begin; unsigned char dur; } _effect;
    union EffectOrArg { struct Effect { unsigned char type; unsigned char events; unsigned char begin; unsigned char dur; } effect; float arg; int int_arg; } _args[2];
}

@property (nonatomic) unsigned int type;
@property (nonatomic) float beginTime;
@property (nonatomic) float duration;
@property (nonatomic) unsigned int events;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)argumentValueAtIndex:(unsigned long long)a0;
- (void)setArgumentValue:(float)a0 atIndex:(unsigned long long)a1;

@end
