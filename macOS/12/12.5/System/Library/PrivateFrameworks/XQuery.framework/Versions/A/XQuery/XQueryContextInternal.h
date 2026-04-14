@class XQueryProlog, XQueryError, NSMutableDictionary, NSDate, NSMutableArray;

@interface XQueryContextInternal : NSObject {
    NSMutableArray *_variables;
    NSMutableDictionary *_globals;
    NSMutableDictionary *_documentCache;
    NSMutableDictionary *_URLCache;
    NSMutableDictionary *_contextNamespaces;
    NSMutableArray *_inScopeNamespaces;
    struct __CFDictionary { } *_baseURINodes;
    XQueryError *_error;
    NSDate *_currentDateTime;
    XQueryProlog *_prolog;
    id _client;
    id _contextItem;
    unsigned long long _position;
    unsigned long long _last;
    BOOL _ordered;
}

+ (id)context;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)error;
- (unsigned long long)position;
- (id)namespaceForPrefix:(id)a0;
- (id)client;
- (void)setClient:(id)a0;
- (void)setOrdered:(BOOL)a0;
- (BOOL)ordered;
- (unsigned long long)last;
- (void)setLast:(unsigned long long)a0;
- (id)currentDateTime;
- (void)setError:(id)a0 raiseException:(BOOL)a1;
- (id)activeProlog;
- (id)baseURI;
- (void)setBaseURI:(id)a0 forNode:(id)a1;
- (void)pushInScopeNamespaces:(id)a0;
- (void)popInScopeNamespaces;
- (id)namespaceForPrefix:(id)a0 fromProlog:(BOOL *)a1;
- (id)firstPrefixForNamespace:(id)a0;
- (BOOL)xmlSpacePreserve;
- (void)setVariable:(id)a0 forID:(long long)a1;
- (id)contextItem;
- (id)baseURIForNode:(id)a0;
- (id)defaultCollation;
- (id)XQueryDocumentForURL:(id)a0;
- (id)URLBody:(id)a0;
- (id)_inScopeVariables;
- (void)_setInScopeVariables:(id)a0;
- (void /* function */ *)XQueryExternalFunctionForQName:(id)a0;
- (void)setActiveProlog:(id)a0;
- (void)setContextItem:(id)a0 position:(unsigned long long)a1;
- (id)variableForID:(long long)a0;
- (id)globalForQName:(id)a0;
- (void)addNamespace:(id)a0 forPrefix:(id)a1;
- (id)defaultElementNamespace;
- (void)_clearGlobals;
- (void)setGlobal:(id)a0 forQName:(id)a1;
- (unsigned long long)baseURINodeCount;
- (id)contextNamespaceForPrefix:(id)a0;

@end
