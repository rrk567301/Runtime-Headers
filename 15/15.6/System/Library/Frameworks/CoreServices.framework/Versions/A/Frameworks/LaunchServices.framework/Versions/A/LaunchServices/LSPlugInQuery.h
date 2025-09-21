@interface LSPlugInQuery : _LSQuery

+ (char)supportsSecureCoding;
+ (id)pluginQuery;
+ (id)pluginQueryWithIdentifier:(id)a0;
+ (id)pluginQueryWithQueryDictionary:(id)a0 applyFilter:(id /* block */)a1;
+ (id)pluginQueryWithURL:(id)a0;
+ (id)pluginQueryWithUUID:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_init;
- (char)_remoteResolutionIsExpensive;
- (char)_requiresDatabaseMappingEntitlement;
- (void)sort:(char)a0 pluginIDs:(id)a1 andYield:(id /* block */)a2 context:(struct LSContext { id x0; } *)a3;

@end
