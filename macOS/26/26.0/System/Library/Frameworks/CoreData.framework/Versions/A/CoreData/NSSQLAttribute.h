@interface NSSQLAttribute : NSSQLColumn

- (void)dealloc;
- (BOOL)isFileBackedFuture;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)attributeDescription;
- (id)initForReadOnlyFetchWithExpression:(id)a0;

@end
