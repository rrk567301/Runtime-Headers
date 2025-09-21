@class NSArray, XQueryProlog;

@interface XQueryInternal : NSObject {
    XQueryProlog *_prolog;
    id _body;
    NSArray *_errors;
}

- (void)finalize;
- (id)body;
- (void)dealloc;
- (id)initWithSource:(id)a0;
- (id)errors;
- (BOOL)isError;
- (id)prolog;

@end
