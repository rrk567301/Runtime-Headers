@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (id)initWithDataType:(unsigned long long)a0;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
