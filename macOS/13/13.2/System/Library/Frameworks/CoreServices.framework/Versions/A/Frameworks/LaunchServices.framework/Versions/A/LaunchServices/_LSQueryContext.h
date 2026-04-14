@protocol _LSQueryResolving;

@interface _LSQueryContext : NSObject {
    id _resolver;
}

@property (readonly) id<_LSQueryResolving> _resolver;

+ (id)defaultContext;

- (id)debugDescription;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)clearCaches;
- (id)_resolver;
- (void)enumerateResolvedResultsOfQuery:(id)a0 withBlock:(id /* block */)a1;
- (id)resolveQueries:(id)a0 error:(id *)a1;
- (id)_resolveQueries:(id)a0 XPCConnection:(id)a1 error:(id *)a2;

@end
