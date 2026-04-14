@class NSString;

@interface MTLFunctionConstantInternal : MTLFunctionConstant {
    NSString *_name;
    unsigned long long _type;
    unsigned long long _index;
    BOOL _required;
}

- (id)name;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 index:(unsigned long long)a2 required:(BOOL)a3;
- (unsigned long long)index;
- (unsigned long long)type;
- (BOOL)required;
- (id)description;
- (void)dealloc;

@end
