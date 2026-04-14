@interface NSSQLAttribute : NSSQLColumn

- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initForReadOnlyFetchWithExpression:(id)a0;
- (id)attributeDescription;
- (BOOL)isFileBackedFuture;
- (void)dealloc;

@end
