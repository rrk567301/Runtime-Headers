@interface MTLBuiltInArgument : MTLBindingInternal {
    unsigned short _builtInType;
    unsigned short _builtInDataType;
}

- (char)isEqual:(id)a0;
- (unsigned long long)builtInDataType;
- (unsigned long long)builtInType;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 active:(char)a3 index:(unsigned long long)a4 dataType:(unsigned long long)a5 builtInType:(unsigned long long)a6;

@end
