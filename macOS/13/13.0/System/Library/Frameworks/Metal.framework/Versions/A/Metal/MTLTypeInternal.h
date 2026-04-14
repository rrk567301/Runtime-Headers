@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithDataType:(unsigned long long)a0;

@end
