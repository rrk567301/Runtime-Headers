@protocol _LSQueryResolving;

@interface _LSQueryContext : NSObject {
    id _resolver;
}

@property (readonly) id<_LSQueryResolving> _resolver;

+ (id)defaultContext;

- (void)clearCaches;
- (id)debugDescription;
- (id)_resolveQueries:(id)a0 XPCConnection:(id)a1 error:(id *)a2;
- (id)resolveQueries:(id)a0 error:(id *)a1;
- (id)init;
- (id)_init;
- (id)_resolver;
- (void).cxx_destruct;
- (void)enumerateResolvedResultsOfQuery:(id)a0 withBlock:(id /* block */)a1;

@end
