@interface MTLBuiltInArgument : MTLBindingInternal {
    unsigned short _builtInType;
    unsigned short _builtInDataType;
}

- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 active:(BOOL)a3 index:(unsigned long long)a4 dataType:(unsigned long long)a5 builtInType:(unsigned long long)a6;
- (unsigned long long)builtInType;
- (unsigned long long)builtInDataType;
- (BOOL)isEqual:(id)a0;

@end
