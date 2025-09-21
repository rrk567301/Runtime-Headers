@interface TSKCOUpdateIdOperation : TSKCOUpdateOperation

+ (id)operationWithAddress:(const void *)a0 propertyId:(unsigned short)a1;
+ (id)operationWithUUIDPath:(id)a0 propertyId:(unsigned short)a1;

- (void)saveToArchiver:(id)a0 message:(void *)a1;
- (id)initWithAddress:(const void *)a0 propertyId:(unsigned short)a1;
- (id)initWithAddress:(const void *)a0 propertyId:(unsigned short)a1 noop:(char)a2;
- (id)initWithAddress:(const void *)a0 propertyType:(const struct { unsigned short x0; char x1; char x2; unsigned short x3[6]; } *)a1 noop:(char)a2;
- (id)initWithUnarchiver:(id)a0 message:(const void *)a1;
- (struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })newTransformableOperation;
- (id)operationWithNewNoop:(char)a0;

@end
