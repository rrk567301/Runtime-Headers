@class XQueryQName, NSArray, XQueryProlog, XQueryTypeDeclaration;

@interface XQueryFunctionDecl : NSObject {
    XQueryQName *_name;
    XQueryTypeDeclaration *_type;
    NSArray *_params;
    id _expr;
    XQueryProlog *_prolog;
}

+ (id)functionDecl:(id)a0 forType:(id)a1 withParams:(id)a2 expr:(id)a3 prolog:(id)a4;

- (void)dealloc;
- (id)name;
- (void)finalize;
- (id)type;
- (BOOL)isExternal;
- (id)params;
- (id)initWithName:(id)a0 forType:(id)a1 withParams:(id)a2 expr:(id)a3 prolog:(id)a4;
- (id)expr;
- (id)prolog;

@end
