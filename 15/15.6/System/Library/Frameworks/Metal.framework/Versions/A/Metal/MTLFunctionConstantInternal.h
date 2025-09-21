@class NSString;

@interface MTLFunctionConstantInternal : MTLFunctionConstant {
    NSString *_name;
    unsigned long long _type;
    unsigned long long _index;
    char _required;
}

- (void)dealloc;
- (id)description;
- (id)name;
- (unsigned long long)type;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)index;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 index:(unsigned long long)a2 required:(char)a3;
- (char)required;

@end
