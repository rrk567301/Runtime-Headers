@class NSString;

@interface MCMResultContainerFromPath : MCMResultWithContainerBase

@property (retain, nonatomic) NSString *relativePath;

- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithUUID:(id)a0 containerPathIdentifier:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 POSIXUser:(id)a4 personaUniqueString:(id)a5 sandboxToken:(id)a6 existed:(BOOL)a7 url:(id)a8 info:(id)a9 transient:(BOOL)a10 userManagedAssetsRelPath:(id)a11 creator:(id)a12 relativePath:(id)a13;
- (void).cxx_destruct;

@end
