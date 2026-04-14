@class NSArray, XQueryProlog;

@interface XQueryInternal : NSObject {
    XQueryProlog *_prolog;
    id _body;
    NSArray *_errors;
}

- (void)finalize;
- (id)initWithSource:(id)a0;
- (void)dealloc;
- (id)body;
- (id)errors;
- (BOOL)isError;
- (id)prolog;

@end
