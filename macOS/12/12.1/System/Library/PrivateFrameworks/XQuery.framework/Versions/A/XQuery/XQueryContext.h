@class XQueryContextInternal;

@interface XQueryContext : NSObject {
    XQueryContextInternal *_internal;
}

+ (id)xqueryContext;
+ (id)xqueryContextWithNamespaces:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)_internal;
- (id)initWithNamespaces:(id)a0;
- (id)evaluateXQuery:(id)a0 constants:(id)a1 contextItem:(id)a2 error:(id *)a3;
- (void)_traceValue:(id)a0 forLabel:(id)a1;
- (void)addXQueryProlog:(id)a0;
- (void)contextSetClient:(id)a0;
- (id)contextClient;
- (void)contextAddClientSelector:(SEL)a0 forName:(id)a1;

@end
