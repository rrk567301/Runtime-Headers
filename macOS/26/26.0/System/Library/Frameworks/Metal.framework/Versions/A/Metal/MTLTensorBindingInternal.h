@class MTLTensorExtents, NSString;

@interface MTLTensorBindingInternal : MTLBindingInternal <MTLTensorBinding>

@property (readonly) long long tensorDataType;
@property (readonly) unsigned long long indexType;
@property (readonly) MTLTensorExtents *dimensions;
@property (readonly) NSString *name;
@property (readonly) long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly, getter=isUsed) BOOL used;
@property (readonly, getter=isArgument) BOOL argument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 access:(unsigned long long)a1 isActive:(BOOL)a2 locationIndex:(unsigned long long)a3 arrayLength:(unsigned long long)a4 dataType:(long long)a5 indexType:(unsigned long long)a6 dimensions:(id)a7;

@end
