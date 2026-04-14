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

- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)error;
- (unsigned long long)position;
- (id)namespaceForPrefix:(id)a0;
- (id)client;
- (void)setClient:(id)a0;
- (BOOL)ordered;
- (void)setOrdered:(BOOL)a0;
- (unsigned long long)last;
- (void)setLast:(unsigned long long)a0;
- (id)currentDateTime;
- (id)contextItem;
- (id)baseURI;
- (BOOL)xmlSpacePreserve;
- (id)defaultCollation;
- (id)defaultElementNamespace;
- (id)namespaceForPrefix:(id)a0 fromProlog:(BOOL *)a1;
- (void)pushInScopeNamespaces:(id)a0;
- (void)popInScopeNamespaces;
- (void)addNamespace:(id)a0 forPrefix:(id)a1;
- (id)_inScopeVariables;
- (void)_setInScopeVariables:(id)a0;
- (id)variableForID:(long long)a0;
- (void)setVariable:(id)a0 forID:(long long)a1;
- (void)_clearGlobals;
- (id)globalForQName:(id)a0;
- (void)setGlobal:(id)a0 forQName:(id)a1;
- (id)activeProlog;
- (void)setActiveProlog:(id)a0;
- (void)setContextItem:(id)a0 position:(unsigned long long)a1;
- (unsigned long long)baseURINodeCount;
- (void)setBaseURI:(id)a0 forNode:(id)a1;
- (id)baseURIForNode:(id)a0;
- (id)firstPrefixForNamespace:(id)a0;
- (void)setError:(id)a0 raiseException:(BOOL)a1;
- (id)contextNamespaceForPrefix:(id)a0;
- (void /* function */ *)XQueryExternalFunctionForQName:(id)a0;
- (id)XQueryDocumentForURL:(id)a0;
- (id)URLBody:(id)a0;

@end
