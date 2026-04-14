@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)dataType;
- (id)description;
- (id)initWithDataType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;

@end
