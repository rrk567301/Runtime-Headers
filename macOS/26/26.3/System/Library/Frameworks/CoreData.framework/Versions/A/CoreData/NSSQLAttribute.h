@interface NSSQLAttribute : NSSQLColumn

- (BOOL)isFileBackedFuture;
- (id)attributeDescription;
- (void)dealloc;
- (id)initForReadOnlyFetchWithExpression:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;

@end
