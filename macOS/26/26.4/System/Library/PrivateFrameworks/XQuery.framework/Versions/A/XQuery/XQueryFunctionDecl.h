@class XQueryQName, NSArray, XQueryProlog, XQueryTypeDeclaration;

@interface XQueryFunctionDecl : NSObject {
    XQueryQName *_name;
    XQueryTypeDeclaration *_type;
    NSArray *_params;
    id _expr;
    XQueryProlog *_prolog;
}

+ (id)functionDecl:(id)a0 forType:(id)a1 withParams:(id)a2 expr:(id)a3 prolog:(id)a4;

- (void)finalize;
- (BOOL)isExternal;
- (id)name;
- (id)type;
- (void)dealloc;
- (id)params;
- (id)expr;
- (id)initWithName:(id)a0 forType:(id)a1 withParams:(id)a2 expr:(id)a3 prolog:(id)a4;
- (id)prolog;

@end
