@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (unsigned long long)dataType;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (void)dealloc;
- (id)initWithDataType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;

@end
