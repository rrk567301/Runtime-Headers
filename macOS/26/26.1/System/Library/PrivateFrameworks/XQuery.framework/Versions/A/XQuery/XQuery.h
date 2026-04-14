@class XQueryInternal;

@interface XQuery : NSObject {
    XQueryInternal *_internal;
}

+ (id)xqueryWithSource:(id)a0;

- (id)initWithSource:(id)a0;
- (id)_internal;
- (void)finalize;
- (void)dealloc;
- (id)parseErrors;

@end
