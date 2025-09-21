@interface LSPlugInQueryAllUnits : LSPlugInQuery

+ (char)supportsSecureCoding;

- (void)sort:(char)a0 pluginIDs:(id)a1 andYield:(id /* block */)a2 context:(struct LSContext { id x0; } *)a3;

@end
