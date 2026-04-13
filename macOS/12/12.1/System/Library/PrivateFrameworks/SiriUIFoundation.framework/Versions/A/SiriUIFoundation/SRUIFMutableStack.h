@interface SRUIFMutableStack : SRUIFStack

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)pushObject:(id)a0;
- (id)popTopObject;
- (void)popObjectsUsingBlock:(id /* block */)a0;

@end
