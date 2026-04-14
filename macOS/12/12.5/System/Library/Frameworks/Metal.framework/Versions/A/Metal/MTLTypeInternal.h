@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)dataType;
- (id)initWithDataType:(unsigned long long)a0;

@end
