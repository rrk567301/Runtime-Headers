@class NSArray, XQueryProlog;

@interface XQueryInternal : NSObject {
    XQueryProlog *_prolog;
    id _body;
    NSArray *_errors;
}

- (id)initWithSource:(id)a0;
- (id)body;
- (void)finalize;
- (void)dealloc;
- (id)errors;
- (BOOL)isError;
- (id)prolog;

@end
