@class XQueryInternal;

@interface XQuery : NSObject {
    XQueryInternal *_internal;
}

+ (id)xqueryWithSource:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)initWithSource:(id)a0;
- (id)_internal;
- (id)parseErrors;

@end
