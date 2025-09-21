@class MTLTensorExtents;

@interface MTLTensorReferenceType : MTLType {
    unsigned long long _dataType;
}

@property (readonly) long long tensorDataType;
@property (readonly) unsigned long long indexType;
@property (readonly) MTLTensorExtents *dimensions;
@property (readonly) unsigned long long access;

- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (void)dealloc;
- (unsigned long long)dataType;
- (BOOL)isEqual:(id)a0;
- (id)initWithTensorDataType:(long long)a0 indexType:(unsigned long long)a1 dimensions:(id)a2 access:(unsigned long long)a3;

@end
