@class XQueryInternal;

@interface XQuery : NSObject {
    XQueryInternal *_internal;
}

+ (id)xqueryWithSource:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)_internal;
- (id)initWithSource:(id)a0;
- (id)parseErrors;

@end
