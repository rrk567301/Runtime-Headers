@class NSArray, XQueryProlog;

@interface XQueryInternal : NSObject {
    XQueryProlog *_prolog;
    id _body;
    NSArray *_errors;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithSource:(id)a0;
- (id)errors;
- (id)body;
- (BOOL)isError;
- (id)prolog;

@end
