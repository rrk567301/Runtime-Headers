@interface NSSQLAttribute : NSSQLColumn

- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (BOOL)isFileBackedFuture;
- (id)initForReadOnlyFetchWithExpression:(id)a0;
- (id)attributeDescription;
- (void)dealloc;

@end
