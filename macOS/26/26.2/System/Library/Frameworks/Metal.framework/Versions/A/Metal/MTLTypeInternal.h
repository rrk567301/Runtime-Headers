@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithDataType:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (void)dealloc;

@end
