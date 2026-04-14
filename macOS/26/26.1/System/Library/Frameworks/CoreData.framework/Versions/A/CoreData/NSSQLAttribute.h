@interface NSSQLAttribute : NSSQLColumn

- (BOOL)isFileBackedFuture;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initForReadOnlyFetchWithExpression:(id)a0;
- (id)attributeDescription;

@end
